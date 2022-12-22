/********************************************************************************
** Form generated from reading UI file 'QtController.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCONTROLLER_H
#define UI_QTCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtControllerClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtControllerClass)
    {
        if (QtControllerClass->objectName().isEmpty())
            QtControllerClass->setObjectName(QStringLiteral("QtControllerClass"));
        QtControllerClass->resize(405, 244);
        centralWidget = new QWidget(QtControllerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 60, 101, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 113, 20));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(160, 10, 231, 131));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 170, 161, 16));
        QtControllerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtControllerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 405, 23));
        QtControllerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtControllerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtControllerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtControllerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtControllerClass->setStatusBar(statusBar);

        retranslateUi(QtControllerClass);

        QMetaObject::connectSlotsByName(QtControllerClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtControllerClass)
    {
        QtControllerClass->setWindowTitle(QApplication::translate("QtControllerClass", "QtController", nullptr));
        pushButton->setText(QApplication::translate("QtControllerClass", "\345\220\221COM\345\217\221\346\266\210\346\201\257", nullptr));
        label->setText(QApplication::translate("QtControllerClass", "Designed by Leventure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtControllerClass: public Ui_QtControllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCONTROLLER_H
