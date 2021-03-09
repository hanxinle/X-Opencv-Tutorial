//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main (int argc, char *argv[]) {
//    Mat src = imread ("1.png");
//    Mat gsrc;
//    Mat lsrc;
//    pyrDown (src, gsrc);
//    pyrUp (src, lsrc);
//    namedWindow ("src");
//    moveWindow ("src", 0, 0);
//    namedWindow ("gsrc");
//    moveWindow ("gsrc", 512, 0);
//    namedWindow ("lsrc");
//    moveWindow ("lsrc", 0, 512);
//
//    imshow ("src", src);
//    imshow ("gsrc", gsrc);
//    imshow ("lsrc", lsrc);
//    cvWaitKey (0);
//
//    return 0;
//}