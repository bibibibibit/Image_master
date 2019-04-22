#ifndef CONTRAST_H
#define CONTRAST_H

#include <QWidget>
#include <opetation.h>
#include <QLabel>

namespace Ui {
class Contrast;
}

class Contrast : public QWidget
{
    Q_OBJECT

public:
    explicit Contrast(QWidget *parent = nullptr);
    QLabel *imageview;
    ~Contrast();

private slots:
    void on_OK_clicked();

    void on_Cancel_clicked();

private:
    Ui::Contrast *ui;
};

#endif // CONTRAST_H
