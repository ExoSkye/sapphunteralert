#include "sapphunter.h"
#include "ui_sapphunter.h"

Sapphunter::Sapphunter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sapphunter)
{
    ui->setupUi(this);
}

Sapphunter::~Sapphunter()
{
    delete ui;
}
