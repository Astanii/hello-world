#ifndef QTAPP_H
#define QTAPP_H
#include <QFile>
#include <QTextStream>
#include <QWidget>

namespace Ui {
class QtApp;
}

class QtApp : public QWidget
{
    Q_OBJECT

public:
    explicit QtApp(QWidget *parent = 0);
    ~QtApp();

private slots:


    void on_findBtn_clicked();

private:
    Ui::QtApp *ui;
    void loadFile();
};

#endif // QTAPP_H
