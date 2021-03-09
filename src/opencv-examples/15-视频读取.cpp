#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main (int argc, char *argv[]) {
    VideoCapture video;
    video.open ("H:\\opecv330_vs2017_x86\\bin\\test.avi");
    if (!video.isOpened ()) {
        cout << "open video failed!" << endl;
        getchar ();
        return -1;
    }

    cout << "open video success!" << endl;
    namedWindow ("video");
    Mat frame;
    for (;;) {
        //if (!video.read(frame))
        //{
        //	break;
        //}
        //读帧，解码
        if (!video.grab ()) {
            break;
        }
        //转换颜色格式
        if (!video.retrieve (frame)) {
            break;
        }
        if (frame.empty ()) break;
        imshow ("video", frame);
        waitKey (30);
    }
    getchar ();



    return 0;
}