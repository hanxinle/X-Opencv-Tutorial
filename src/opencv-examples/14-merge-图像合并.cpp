///*******************************************************************************
//**                                                                            **
//**                    Jiedi(China nanjing)Ltd.                                **
//**	      版权归夏曹俊所有，此代码只能作为学习参考                            **                                                                            **
//*******************************************************************************/
//
///*****************************FILE INFOMATION***********************************
//**
//** Project       : XVideoEdit
//** Description   : 视频编辑器
//** Contact       : xiacaojun@qq.com
//**		  QQ群	 ：559312905 (可以咨询问题)
//**   微信公众号  : jiedi2007
//**
//*******************************************************************************/
//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main (int argc, char *argv[]) {
//    Mat img1 = imread ("1.png");
//    Mat img2 = imread ("2.png");
//    int height = img1.rows;
//    int width1 = img1.cols;
//    int width2 = img2.cols;
//    // 将高图像等比缩放与低图像高度一致
//    if (img1.rows > img2.rows) {
//        height = img2.rows;
//        width1 = img1.cols * ((float) img2.rows / (float) img1.rows);
//        resize (img1, img1, Size (width1, height));
//    }
//    else if (img1.rows < img2.rows) {
//        width2 = img2.cols * ((float) img1.rows / (float) img2.rows);
//        resize (img2, img2, Size (width2, height));
//    }
//    //创建目标Mat
//    Mat des;
//    des.create (height, width1 + width2, img1.type ());
//    Mat r1 = des (Rect (0, 0, width1, height));
//    img1.copyTo (r1);
//    Mat r2 = des (Rect (width1, 0, width2, height));
//    img2.copyTo (r2);
//
//    namedWindow ("des");
//    imshow ("des", des);
//    waitKey (0);
//
//    return 0;
//}