#include "XVideoEditor.h"
#include "XVideoThread.h"
#include "xvideowidget.h"
#include <QFileDialog>
#include <string>
#include <QMessageBox>
#include <iostream>
#include <opencv2/core.hpp>
using namespace std;
XVideoEditor::XVideoEditor(QWidget *parent)
    : QWidget(parent) {
    ui.setupUi(this);
    qRegisterMetaType<cv::Mat>("cv::Mat");
    QObject::connect(XVideoThread::Get(),
                     SIGNAL(ViewImage1(cv::Mat)),
                     ui.src,
                     SLOT(SetImage(cv::Mat)));


}


void XVideoEditor::Open() {
    QString name = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("请选择视频文件"));
    if (name.isEmpty()) return;
    string file = name.toLocal8Bit().data();
    //QMessageBox::information (this, "", name);
    int re = XVideoThread::Get()->Open(file);
    if (!re) {
        QMessageBox::information(this, "", "XVideoThread::Get ()->Open (file)) failed.");
    }
}

