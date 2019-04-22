#ifndef ALPHA_H
#define ALPHA_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Alpha;
}

class Alpha : public QWidget
{
    Q_OBJECT

public:
    explicit Alpha(QWidget *parent = nullptr);
    ~Alpha();
    QLabel *imageview;

private slots:
    void on_OK_clicked();

    void on_Cancel_clicked();

private:
    Ui::Alpha *ui;
};

#endif // ALPHA_H
