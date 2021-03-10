#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main (int argc, char *argv[]) {
    VideoCapture cam (0);
    if (!cam.isOpened ()) {
        cout << "cam open failed!" << endl;
        getchar ();
        return -1;
    }
    cout << "cam open success!" << endl;
    namedWindow ("cam");
    Mat img;
    //VideoWriter vw;
    //int fps = cam.get (CAP_PROP_FPS);
    //if (fps <= 0)fps = 25;
    //vw.open ("out.avi",
    //         VideoWriter::fourcc ('X', '2', '6', '4'),
    //         fps,
    //         Size (cam.get (CAP_PROP_FRAME_WIDTH),
    //         cam.get (CAP_PROP_FRAME_HEIGHT))
    //);
    //if (!vw.isOpened ()) {
    //    cout << "VideoWriter open failed!" << endl;
    //    getchar ();
    //    return -1;
    //}
    //cout << "VideoWriter open success!" << endl;

    for (;;) {
        cam.read (img);
        if (img.empty ())break;
        imshow ("cam", img);
        //  vw.write (img);
        if (waitKey (5) == 'q') break;
    }


    waitKey (0);
    return 0;
}