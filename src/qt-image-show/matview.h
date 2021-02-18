#pragma once
#include <QOpenGLWidget>

class MatView :public QOpenGLWidget {
    Q_OBJECT
public:
    MatView(QWidget *);
    ~MatView();

    void paintEvent(QPaintEvent * e);
};
