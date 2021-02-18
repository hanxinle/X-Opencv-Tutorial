/********************************************************************************
** Form generated from reading UI file 'qtimageshow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTIMAGESHOW_H
#define UI_QTIMAGESHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "matview.h"

QT_BEGIN_NAMESPACE

class Ui_qtimageshowClass
{
public:
    MatView *Mat;

    void setupUi(QWidget *qtimageshowClass)
    {
        if (qtimageshowClass->objectName().isEmpty())
            qtimageshowClass->setObjectName(QString::fromUtf8("qtimageshowClass"));
        qtimageshowClass->resize(512, 512);
        Mat = new MatView(qtimageshowClass);
        Mat->setObjectName(QString::fromUtf8("Mat"));
        Mat->setGeometry(QRect(-10, 40, 512, 512));

        retranslateUi(qtimageshowClass);

        QMetaObject::connectSlotsByName(qtimageshowClass);
    } // setupUi

    void retranslateUi(QWidget *qtimageshowClass)
    {
        qtimageshowClass->setWindowTitle(QApplication::translate("qtimageshowClass", "qtimageshow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtimageshowClass: public Ui_qtimageshowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTIMAGESHOW_H
