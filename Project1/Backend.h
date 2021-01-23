#pragma comment(lib, "winmm.lib")
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<Windows.h>
#include <mmsystem.h>
#include <math.h>
#include <fstream>
#include "opencv2/core/core.hpp"

#include <iostream>
//#include <filesystem>

using namespace cv;
using namespace std;

#define BLUR_RATIO 3

double thresh = 60;
double maxValue = 255;

namespace Backend
{
    /// <summary>
/// folosirea claselor de obiecte
/// </summary>

    class Stage
    {
    public:
        Stage();
        void SetArea(float area)
        {
            this->area = area;
        }
        string getStage()
        {
            float x;
            x = (0.1 + sqrt(this->area * 0.0332 + 0.0032)) / 0.0166 * 10;
            if (this->area <= 0.1)
            {
                cout << "T1, mi, N0\n";
                x = x * this->area * 9.7;
                pos = (int)x;
                return "Stage I\n";
            }

            if (this->area <= 0.5 && this->area >= 0.1)
            {
                cout << "T1, a, N0\n";
                pos = (int)x;
                return "Stage IIA\n";
            }

            if (this->area <= 1 && this->area >= 0.5)
            {
                cout << "T1, b, N1\n";
                pos = (int)x;
                return "Stage IIA\n";
            }

            if (this->area <= 2 && this->area >= 1)
            {
                cout << "T1, c, N1\n";
                pos = (int)x;
                return "Stage IIB\n";
            }

            if (this->area <= 5 && this->area >= 2)
            {
                cout << "T2, N1";
                x = x - this->area * this->area / 2;
                pos = (int)x;
                return "Stage IIB\n";
            }

            if (this->area > 5)
            {
                cout << "T3, N2\n";
                if (this->area <= 6)
                {
                    x = x - this->area * this->area / 2;
                }
                if (this->area <= 7.5 && this->area >= 6)
                {
                    x = x - this->area * this->area / 2 + this->area;
                }
                if (this->area >= 10)
                {
                    x = 400;
                }
                pos = (int)x;
                return "Stage IIIA \n";

            }
        }
        int getPos()
        {
            return this->pos;
        }
        ~Stage();

    private:
        float area;
        int pos;
    };

    Stage::Stage()
    {

    }

    Stage::~Stage()
    {
        // cout << "\n\nS-a procesat imaginea cu aria: " << this->area << endl;
    }

    class Imagine
    {
    public:
        Imagine(std::string name);

        /// <summary>
        /// this is where we release the images that have been used
        /// </summary>

        ~Imagine();

        /// <summary>
        /// display the images
        /// </summary>

        void Display()
        {
            namedWindow("Display window", WINDOW_NORMAL);
            imshow("Display window", image);

           // namedWindow("Gray Image", WINDOW_NORMAL);
           // imshow("Gray Image", grayImage);

            //namedWindow("Blured Gray Image", WINDOW_NORMAL);
           // imshow("Blured Gray Image", bluredGrayImage);

           // namedWindow("Blured Image", WINDOW_NORMAL);
           // imshow("Blured Image", bluredImage);

           // namedWindow("Sobel Image", WINDOW_NORMAL);
           // imshow("Sobel Image", grad);

           // namedWindow("Tresh Image", WINDOW_NORMAL);
            //imshow("Tresh Image", dst);

            namedWindow("Graph Image", WINDOW_NORMAL);
            imshow("Graph Image", graphic);
        }


        int Graph(int pozitie)
        {
            int i, k;
            graphic = imread("res/graph.jpg", IMREAD_COLOR);
            try
            {
                if (!image.data) {
                    throw - 1;

                }
                else
                {
                    if (pozitie < 4)
                    {
                        pozitie += 4;
                    }
                    for (i = 0; i < graphic.cols * 3; i++) {
                        for (k = 400 - (pozitie + 3); k < 400 - (pozitie - 4); k++) {
                            graphic.at<uchar>(k, i) = 0;
                        }

                    }
                    return 0;
                }
            }
            catch (const int impos)
            {
                cout << "Could not open the image file" << endl;
                return impos;
            }

        }

        /// <summary>
        /// the actuall processing of the image
        /// </summary>

        int Processing()
        {
            thresh = 60;
            maxValue = 255;
            image = imread("res/mamo/mamo/" + name + ".jpg", IMREAD_COLOR);
            try
            {
                if (!image.data) {
                    throw - 1;

                }
                else {
                    height = image.rows;
                    width = image.cols;
                    //cout << "height=" << height << endl;
                    //cout << "width=" << width << endl;
                    cvtColor(image, grayImage, COLOR_BGR2GRAY);

                    GaussianBlur(grayImage, bluredGrayImage, Size(BLUR_RATIO, BLUR_RATIO), 0, 0);

                    GaussianBlur(image, bluredImage, Size(BLUR_RATIO, BLUR_RATIO), 0, 0);

                    Sobel(bluredGrayImage, grad_x, CV_16S, 1, 0, 3, 1, 0, BORDER_DEFAULT);
                    Sobel(bluredGrayImage, grad_y, CV_16S, 0, 1, 3, 1, 0, BORDER_DEFAULT);

                    convertScaleAbs(grad_x, abs_grad_x);
                    convertScaleAbs(grad_y, abs_grad_y);

                    addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, grad);

                    threshold(grayImage, dst, thresh, maxValue, THRESH_BINARY);

                    int i, k;
                    int x1, x2, y1, y2;
                    x1 = (int)(0.15 * dst.cols);
                    x2 = (int)(dst.cols - 0.03 * dst.cols);
                    y1 = (int)(0.05 * dst.rows);
                    y2 = (int)(dst.rows - 0.05 * dst.rows);

                    for (i = 0; i < x1; i++) {
                        for (k = 0; k < dst.rows; k++) {
                            dst.at<uchar>(k, i) = 0;
                        }

                    }

                    for (i = 0; i < dst.cols; i++) {
                        for (k = 0; k < y1; k++) {
                            dst.at<uchar>(k, i) = 0;
                        }

                    }

                    for (i = 0; i < dst.cols; i++) {
                        for (k = y2; k < dst.rows; k++) {
                            dst.at<uchar>(k, i) = 0;
                        }

                    }

                    for (i = x2; i < dst.cols; i++) {
                        for (k = 0; k < dst.rows; k++) {
                            dst.at<uchar>(k, i) = 0;
                        }

                    }

                    //ariaPx = 0;
                    ariaPoz = this->width * this->height;

                    for (i = 0; i < dst.cols; i++) {
                        for (k = 0; k < dst.rows; k++) {
                            if (dst.at<uchar>(k, i) == 255)
                            {
                                ariaPx++;
                            }
                        }

                    }

                    beta = 0.17;
                    alfa = beta * 10 * 3 * 3.14 / ariaPoz;
                    ariaCm = ariaPx * alfa;
                    ariaPozCm = ariaPoz * alfa;
                    return 0;
                }
            }
            catch (const int impos)
            {
                cout << "Could not open the image file" << endl;
                return impos;
            }


        }

        /// <summary>
        /// getting all the necessary values in the next 5 functions
        /// </summary>

        double getArea()
        {
            return this->ariaPx;
        }

        double getAreaCm()
        {
            return this->ariaCm;
        }

        double getAreaPoz()
        {
            return this->ariaPoz;
        }

        double getAreaPozCm()
        {
            return this->ariaPozCm;
        }

        double getAlfa()
        {
            return this->alfa;
        }

        /// <summary>
        /// scrierea noilor imagini construite
        /// </summary>

        void Write()
        {
            image = imwrite("res/proc/" + name + "_Gray_blur.jpg", bluredGrayImage);

            image = imwrite("res/proc/" + name + "_Thresh.jpg", dst);
        }

    private:
        /// <summary>
        /// this is wherre we declare what images we will use
        /// </summary>

        Mat image, dst, graphic;
        Mat grayImage;
        Mat bluredImage;
        Mat bluredGrayImage;
        Mat grad_x, grad_y;
        Mat abs_grad_x, abs_grad_y;
        Mat grad;
        string name;
        double ariaCm, alfa, ariaPozCm, beta, ariaPx, ariaPoz;
        int height, width;
    };

    Imagine::Imagine(std::string name)
    {
        //cout << "Asigurati-va ca aveti imaginea dorita in folder-ul res\n";
        //cout << "Care este numele imaginii in format .jpg \n(Atentie, inserati fara extensia jpg numele, acest fisier trebuie sa se afle in folder-ul 'res/' \nExemplu pt fisierul: Evelynn_15.jpg veti introduce Evelynn_15\n";
       // cin >> name;
        this->name = name;
        this->ariaCm = 0;
        this->ariaPoz = 0;
        this->ariaPozCm = 0;
        this->ariaPx = 0;

    }

    Imagine::~Imagine()
    {
        image.release();
        image.~Mat();

        grayImage.release();
        grayImage.~Mat();

        bluredGrayImage.release();
        bluredGrayImage.~Mat();

        bluredImage.release();
        bluredImage.~Mat();

        grad.release();
        grad.~Mat();

        grad_x.release();
        grad_x.~Mat();

        grad_y.release();
        grad_y.~Mat();

        abs_grad_x.release();
        abs_grad_x.~Mat();

        abs_grad_y.release();
        abs_grad_y.~Mat();

        dst.release();
        dst.~Mat();

        graphic.release();
        graphic.~Mat();

        maxValue = NULL;
        height = NULL;
        width = NULL;
        ariaCm = NULL;
        ariaPoz = NULL;
        ariaPozCm = NULL;
        ariaPx = NULL;
        //  cout << "Imaginea a fost eliberata\n";
    }


    int Functionalitate()
    {
        ofstream myfile;
        myfile.open("res/rezultate.txt");

        vector<string> name;
        vector<double> dim;
        string n, fisier = "res/sani.txt", fw;
        ifstream m1(fisier);
        try
        {
            if (m1.is_open())
            {
                while (getline(m1, n))
                {
                    name.push_back(n);
                }
            }
            else
            {
                throw fisier;
            }
        }
        catch (const string fisier)
        {
            cout << "Nu exista fisierul cu denumirea " << fisier << endl;
            exit(404);
        }
        double ariaCm, alfa, ariaPozCm, ariaPx, ariaPoz;
        int position;
        cout << "\nSe proceseaza " << name.size() << " imagini\n";
        fw = name.at(0).substr(0, name.at(0).find(" "));
        cout << fw << "=firstword\n";


        for (int i = 0; i < name.size(); i++)
        {

            Imagine im(name.at(i));
           // Help ajutor;

            if (im.Processing() == -1)
            {
                return -1;
            }
            Mat dst;
            ariaCm = im.getAreaCm();
            ariaPoz = im.getAreaPoz();
            ariaPx = im.getArea();
            ariaPozCm = im.getAreaPozCm();
            alfa = im.getAlfa();

          

           // cout << "\nAria in pixeli este: " << ariaPx;
            // cout << "\nAria pozei in pixeli este: " << ariaPoz / 10;
             //cout << "\nAria pozei in Cm este: " << ariaPozCm;
            cout << "\nAria in Cm este: " << ariaCm;
            //cout << "\nIndicele de scalare este: 1/" << 1 / alfa << " (cm^2/px^2) " << endl;
            cout << endl;


            if (name.at(i).substr(0, name.at(i).find(" ")).compare(fw) == 0)
            {
                dim.push_back(ariaCm);
            }
            else
            {

                myfile << fw << " evolueaza in urmatorul fel:\n";
                for (int j = 0; j < dim.size(); j++)
                {
                    myfile << dim.at(j) << " cm - ";
                }
                myfile << endl << endl;
                dim.clear();
                fw = name.at(i).substr(0, name.at(i).find(" "));
                i--;
            }
            if (i == name.size() - 1)
            {
                myfile << endl << fw << " evolueaza in urmatorul fel:\n";
                for (int j = 0; j < dim.size(); j++)
                {
                    myfile << dim.at(j) << " cm - ";
                }
                myfile << endl << endl;
                dim.clear();
            }


            Stage cancer;
            string stare;

            cancer.SetArea(ariaCm);
            stare = cancer.getStage();
            cout << endl << stare;

            position = cancer.getPos();
            //cout << endl << position;
            if (position > 400)
            {
                position = 400 - 3;
            }
            if (position < 3)
            {
                position = 3;
            }
            if (im.Graph(position) == -1)
            {
                return -1;
            }

            im.Write();
            if (i<4 && i>0)
            {
                im.Display();/////////////////////////////////////////this
            }
            
            cancer.~Stage();
            cout << endl;
            im.~Imagine();

            //Release();



            waitKey(0);

        }

        ariaCm = NULL;
        alfa = NULL;
        ariaPozCm = NULL;
        ariaPx = NULL;
        ariaPoz = NULL;
        position = NULL;

    }
    void StergereTotala()
    {
        string numele = "res/proc/", GBlur = "_Gray_blur", Thr = "_Thresh", nm1, nm2;
        vector<string> name;
        string n, fisier = "res/sani.txt";
        ifstream m1(fisier);
        try
        {
            if (m1.is_open())
            {
                while (getline(m1, n))
                {
                    name.push_back(n);
                }
            }
            else
            {
                throw fisier;
            }
        }
        catch (const string fisier)
        {
            cout << "Nu exista fisierul cu denumirea " << fisier << endl;
            exit(404);
        }
        for (int i = 0; i < name.size(); i++)
        {
            nm1 = numele + name.at(i) + Thr + ".jpg";
            nm2 = numele + name.at(i) + GBlur + ".jpg";
            char* cstr1 = new char[nm1.length() + 1];
            char* cstr2 = new char[nm2.length() + 1];
            strcpy(cstr1, nm1.c_str());
            strcpy(cstr2, nm2.c_str());
            try
            {
                if (remove(cstr1) != 0)
                {

                }
                if (remove(cstr2) != 0)
                {

                }
            }
            catch (const int)
            {
                cout << "Unul din fisiere nu exista\n";
            }
            delete[] cstr1;
            delete[] cstr2;
        }



    }
}