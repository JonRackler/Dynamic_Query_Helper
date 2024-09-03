#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->quitButton, SIGNAL (clicked()), QApplication::instance(),SLOT (quit()));
    connect(ui->generate_button, &QPushButton::clicked, this, &MainWindow::makeQuery);
    connect(ui->clear_button, &QPushButton::clicked, this, &MainWindow::clearQuery);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::makeQuery()
{
    ui->output_box->setPlainText("Hello there");
}

void MainWindow::clearQuery()
{
    ui->output_box->clear();
}
