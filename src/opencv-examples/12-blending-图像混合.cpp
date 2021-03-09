//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//
//int main (int argc, char *argv[]) {
//    Mat img1 = imread ("1.png");
//    Mat img2 = imread ("2.png");
//    resize (img2, img2, img1.size ());
//    Mat dst;
//    float a = 0.8;
//    addWeighted (img1, a, img2, 1 - a, 8, dst);
//
//    namedWindow ("blending");
//    imshow ("blending", dst);
//    waitKey (0);
//    return 0;
//}