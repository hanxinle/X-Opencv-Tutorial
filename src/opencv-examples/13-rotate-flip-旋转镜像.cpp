//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main (int argc, char *argv[]) {
//    Mat img = imread ("1.png");
//    Mat rot;
//    Mat fl;
//    //  ratate type:
//    //  ROTATE_90_CLOCKWISE = 0,   顺时针90度
//    //  ROTATE_180 = 1,
//    //  ROTATE_90_COUNTERCLOCKWISE = 2, 逆时针90度
//    cv::rotate (img, rot, ROTATE_90_CLOCKWISE);
//    cv::flip (img, fl, 1); // 0-x,1-y,-1-all
//    namedWindow ("rot");
//    imshow ("rot", rot);
//    namedWindow ("fl");
//    imshow ("fl", fl);
//    waitKey (0);
//    return 0;
//}