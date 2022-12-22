#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtController.h"
#include "qaxobject.h"
#include "qfile.h"
#include "qtextstream.h"
#include "qdebug.h"
class QtController : public QMainWindow
{
    Q_OBJECT

public:
    QtController(QWidget *parent = nullptr);
    ~QtController();
    QAxObject ax_test;
    void Init() {
        this->ax_test.setControl("IOutClass");
        //获取接口文档
        QString interfaces = ax_test.generateDocumentation();
        QFile docs("AX_Interfaces.html");
        docs.open(QIODevice::ReadWrite | QIODevice::Text);
        QTextStream TS(&docs);
        TS << interfaces << endl;

        qDebug() << QObject::connect(&this->ax_test, SIGNAL(SendMessageOut(QString)), this, SLOT(getMessageFromCS(QString)));
    }

private slots:
    void on_pushButton_clicked() {
        this->ax_test.dynamicCall("getMessage(QString)", this->ui.lineEdit->text());
    }
    void getMessageFromCS(QString strValue);
private:
    Ui::QtControllerClass ui;
};
