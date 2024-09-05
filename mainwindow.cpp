#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QRegularExpression>

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
    //text is the propery that holds the text of a QLineEdit box
    //plainText is the property that holds the text of the QTextEdit box

    QStringList outputList = getItems(*ui->item_list);

    QString table = ui->enter_table->text();
    QString field = ui->enter_field->text();
    for (auto& str : outputList)
    {
        str.prepend(table + "." + field + " = \"");
        str.append("\"");
    }
    QString resultStr = "(";
    resultStr.append(outputList.join(" OR "));
    resultStr.append(")");
    ui->output_box->setPlainText(resultStr);
}

void MainWindow::clearQuery()
{
    ui->output_box->clear();
}

QStringList MainWindow::getItems(const QTextEdit &textEdit)
{
    QString data = textEdit.toPlainText();
    QStringList strList = data.split("\n", Qt::SkipEmptyParts);
    //QString str = data.replace(QString("\n"), QString(" OR "));
    return strList;
}
