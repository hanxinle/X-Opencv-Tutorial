#pragma once
#include <opencv2/core.hpp>
#include <QThread>
#include <string>
#include <QMutex>
class XVideoThread :public QThread {

    Q_OBJECT

public:


    bool Open(std::string file);

    void run();
    static XVideoThread* Get() {
        static XVideoThread vt;
        return &vt;
    }

    ~XVideoThread();
signals:
    void ViewImage1(cv::Mat mat);

protected:
    QMutex mutex;
    XVideoThread();
};

