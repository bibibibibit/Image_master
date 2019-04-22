#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <brightness.h>
#include <contrast.h>
#include <alpha.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionBrightness_triggered();

    void on_actionContrast_triggered();

    void on_actionAlpha_triggered();

private:
    Ui::MainWindow *ui;
    Brightness *brightness;
    Contrast *contrast;
    Alpha *alpha;

};

#endif // MAINWINDOW_H
