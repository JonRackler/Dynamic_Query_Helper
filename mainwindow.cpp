#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->quitButton, SIGNAL (clicked()), QApplication::instance(),SLOT (quit()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
