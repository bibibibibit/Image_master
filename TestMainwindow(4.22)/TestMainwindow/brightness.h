#ifndef BRIGHTNESS_H
#define BRIGHTNESS_H

#include <QWidget>
#include <opetation.h>
#include <QLabel>

namespace Ui {
class Brightness;
}

class Brightness : public QWidget
{
    Q_OBJECT

public:
    explicit Brightness(QWidget *parent = nullptr);
    QLabel *imageview;
    ~Brightness();

private slots:
    void on_OK_clicked();

    void on_Cancel_clicked();

private:
    Ui::Brightness *ui;
};

#endif // BRIGHTNESS_H
