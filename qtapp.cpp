#include "qtapp.h"
#include "ui_qtapp.h"

QtApp::QtApp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QtApp)
{
    ui->setupUi(this);
    loadFile();
}

QtApp::~QtApp()
{
    delete ui;
}



void QtApp::loadFile()
{
    QFile inputFile(":/input.txt");
          inputFile.open(QIODevice::ReadOnly);

          QTextStream in(&inputFile);
          QString line = in.readAll();
          inputFile.close();

          ui->textEdit->setPlainText(line);
          QTextCursor cursor = ui->textEdit->textCursor();
          cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);

}

void QtApp::on_findBtn_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}
