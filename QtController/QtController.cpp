#include "QtController.h"

QtController::QtController(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	Init();
   
}

QtController::~QtController()
{}

void QtController::getMessageFromCS(QString strValue)
{
    this->ui.textEdit->append(strValue);
}
