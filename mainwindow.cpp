#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD
=======

    QObject::connect(ui->quitButton, SIGNAL (clicked()), QApplication::instance(),SLOT (quit()));
>>>>>>> 9c0b0f6 (Added quit button)
}

MainWindow::~MainWindow()
{
    delete ui;
}
<<<<<<< HEAD

=======
>>>>>>> 9c0b0f6 (Added quit button)
