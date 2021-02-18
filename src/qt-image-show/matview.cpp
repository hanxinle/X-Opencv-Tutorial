﻿#include "matview.h"
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <QImage>
#include <QPainter>
using namespace cv;

MatView::MatView(QWidget * p) :QOpenGLWidget(p) {}


MatView::~MatView() {}

void MatView::paintEvent(QPaintEvent * e) {
    Mat src = imread("1.png");
    cvtColor(src, src, COLOR_BGR2RGB);
    QImage img(src.data, src.cols, src.rows, QImage::Format_RGB888);
    QPainter painter;
    painter.begin(this);
    painter.drawImage(QPoint(0, 0), img);
}
