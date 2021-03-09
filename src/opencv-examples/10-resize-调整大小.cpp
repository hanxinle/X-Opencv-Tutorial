//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main (int argc, char *argv[]) {
//    Mat src = imread ("1.png"); //512*512 256 1024
//    Mat img256, img1024, des256, des1024;
//    resize (src, des256, Size (256, 256), 0, 0, INTER_NEAREST);
//
//    //resize(src, img1024, Size(4024, 4024), 0, 0, INTER_NEAREST);
//    //resize (src, des256, Size (1024, 1024), 0, 0, INTER_NEAREST);
//    resize (src, des1024, Size (1024, 1024), 0, 0, INTER_LINEAR);
//
//    namedWindow ("src");
//    //namedWindow("img256");
//    namedWindow ("des256");
//    namedWindow ("des1024");
//    imshow ("src", src);
//    imshow ("des256", des256);
//    imshow ("des1024", des1024);
//
//    //imshow("img1024", img1024);
//    waitKey (0);
//    return 0;
//}