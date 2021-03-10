//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//void PrintMs (const char *text = "") {
//    static long long last = 0;
//    long long cur = getTickCount ();
//    if (last == 0) {
//        last = cur;
//        return;
//    }
//    long long ms = 0;
//    ms = ((double) (cur - last) / getTickFrequency ()) * 1000;
//    if (*text != 0) {
//        printf ("%s = %dms\n", text, ms);
//    }
//    last = getTickCount ();
//}
//
//int main (int argc, char *argv[]) {
//    VideoCapture video;
//    video.open ("1.mp4");
//    if (!video.isOpened ()) {
//        cout << "open video failed!" << endl;
//        getchar ();
//        return -1;
//    }
//
//    cout << "open video success!" << endl;
//    int fps = video.get (CAP_PROP_FPS);
//    cout << "fps = " << fps << endl;  // 29
//
//    namedWindow ("video");
//    Mat frame;
//    for (;;) {
//        if (!video.read (frame)) {
//            break;
//        }
//        // 帧数
//        int cur = video.get (CAP_PROP_POS_FRAMES);
//        // 90帧≈3s，3s后重新播放
//        if (cur > 90) {
//            video.set (CAP_PROP_POS_FRAMES, 0);
//            continue;
//        }
//
//        if (frame.empty ()) break;
//        imshow ("video", frame);
//        waitKey (30);
//    }
//    getchar ();
//
//
//
//    return 0;
//}