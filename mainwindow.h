#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
<<<<<<< HEAD
namespace Ui { class MainWindow; }
=======
namespace Ui {
class MainWindow;
}
>>>>>>> 9c0b0f6 (Added quit button)
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
