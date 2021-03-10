//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
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
//    namedWindow ("video");
//
//    //fps
//    int fps = video.get (CAP_PROP_FPS);
//    int s = 30;
//    if (fps != 0)
//        s = 1000 / fps;
//    cout << "fps is " << fps << endl;
//    // 帧数
//    int fcount = video.get (CAP_PROP_FRAME_COUNT);
//    cout << "total frame is " << fcount << endl;
//    cout << "total sec is " << fcount/fps << endl;
//    // 宽度，也可以获取其它信息
//    cout << "CAP_PROP_FRAME_WIDTH " << video.get (CAP_PROP_FRAME_WIDTH) << endl;
//    cout << "CAP_PROP_FRAME_HEIGHT " << video.get (CAP_PROP_FRAME_HEIGHT) << endl;
//    s = s / 2;
//    int f = 0;
//    // frame读取 video 并显示每一帧
//    Mat frame;
//    for (;;) {
//        video.read (frame);
//        if (frame.empty ()) break;
//        imshow ("video", frame);
//        waitKey (s);
//    }
//    getchar ();
//}