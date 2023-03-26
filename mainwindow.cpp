#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "sapphunter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->pushButton, &QAbstractButton::pressed, this, &MainWindow::openAlert);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openAlert() {
    Sapphunter w;
    w.show();
    w.exec();
}
