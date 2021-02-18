#pragma once

#include <QtWidgets/QWidget>
#include "ui_qtimageshow.h"

class qtimageshow : public QWidget
{
    Q_OBJECT

public:
    qtimageshow(QWidget *parent = Q_NULLPTR);

private:
    Ui::qtimageshowClass ui;
};
