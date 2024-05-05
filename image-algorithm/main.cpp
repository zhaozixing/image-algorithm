//
//  main.cpp
//  image-algorithm
//
//  Created by Jacob Green on 2024/5/5.
//

#include <iostream>
#include <opencv2/opencv.hpp>

//#include "gray.hpp"
#include "color.hpp"

using namespace std;
using namespace cv;

int main(int argc, const char * argv[]) {
    
    //图片路径
    string image_path = "/Users/jacob/Workspaces/github/image-algorithm/Demo.png";
    //图片读取
    Mat src_image = imread(image_path, 1);
    if(src_image.empty())
    {
        //图片不存在
        cout << "no file!" << endl;
        return -1;
    }

    //图片显示
    //imshow("image_gray", gray_avg(src_image));
    //imshow("image_gray", gray_weight(src_image));
    imshow("image_color_scale", color_scale(src_image, 1.2, 0.8, 0.8));

    waitKey(0);
    return 0;
}
