//
//  gray.cpp
//  image-algorithm
//
//  Created by Jacob Green on 2024/5/5.
//
#include "gray.hpp"

using namespace cv;

Mat gray_avg(Mat src_image)
{
    Mat gray_image = Mat(src_image.rows, src_image.cols, CV_8UC1);
    float R, G, B;
    for (int i=0; i<src_image.rows; i++){
        uchar* data = gray_image.ptr<uchar>(i);
        for(int j=0; j<src_image.cols; j++){
            R = src_image.at<Vec3b>(i,j)[2];
            G = src_image.at<Vec3b>(i,j)[1];
            B = src_image.at<Vec3b>(i,j)[0];
            data[j] = (int)(R + G + B) / 3;
        }
    }
    return gray_image;
}
