#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QFileDialog>
#include <QMainWindow>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_OpenImage_clicked();

    void on_pushButton_Process_clicked();

private:
    Ui::MainWindow *ui;
    Mat image;
};

#endif // MAINWINDOW_H
