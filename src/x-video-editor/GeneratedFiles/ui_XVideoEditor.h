/********************************************************************************
** Form generated from reading UI file 'XVideoEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XVIDEOEDITOR_H
#define UI_XVIDEOEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "xvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_XVideoEditorClass
{
public:
    XVideoWidget *src;
    QPushButton *openButton;
    XVideoWidget *dst;
    QPushButton *playButton;
    QPushButton *pauseButton;

    void setupUi(QWidget *XVideoEditorClass)
    {
        if (XVideoEditorClass->objectName().isEmpty())
            XVideoEditorClass->setObjectName(QString::fromUtf8("XVideoEditorClass"));
        XVideoEditorClass->resize(797, 634);
        src = new XVideoWidget(XVideoEditorClass);
        src->setObjectName(QString::fromUtf8("src"));
        src->setGeometry(QRect(20, 30, 360, 240));
        openButton = new QPushButton(XVideoEditorClass);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(40, 330, 60, 30));
        dst = new XVideoWidget(XVideoEditorClass);
        dst->setObjectName(QString::fromUtf8("dst"));
        dst->setGeometry(QRect(420, 30, 360, 240));
        playButton = new QPushButton(XVideoEditorClass);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(120, 330, 60, 30));
        pauseButton = new QPushButton(XVideoEditorClass);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(200, 330, 60, 30));

        retranslateUi(XVideoEditorClass);
        QObject::connect(openButton, SIGNAL(clicked()), XVideoEditorClass, SLOT(Open()));

        QMetaObject::connectSlotsByName(XVideoEditorClass);
    } // setupUi

    void retranslateUi(QWidget *XVideoEditorClass)
    {
        XVideoEditorClass->setWindowTitle(QApplication::translate("XVideoEditorClass", "XVideoEditor", nullptr));
        openButton->setText(QApplication::translate("XVideoEditorClass", "\346\211\223\345\274\200", nullptr));
        playButton->setText(QApplication::translate("XVideoEditorClass", "\346\222\255\346\224\276", nullptr));
        pauseButton->setText(QApplication::translate("XVideoEditorClass", "\346\232\202\345\201\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XVideoEditorClass: public Ui_XVideoEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XVIDEOEDITOR_H
