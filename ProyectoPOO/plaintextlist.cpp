#include "plaintextlist.h"
#include "ui_plaintextlist.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

PlainTextList::PlainTextList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlainTextList)
{
    ui->setupUi(this);
}

PlainTextList::~PlainTextList()
{
    delete ui;
}

void PlainTextList::on_pushButton_exit_plaintext_clicked()
{
    close();
}

void PlainTextList::on_pushButton_generate_plaintext_clicked()
{
    QFile file("/home/pacha/Escritorio/PROYECTO POO/Casas.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "Information", file.errorString());
    QTextStream in(&file);
    ui->textBrowser_plaintext->setText(in.readAll());
}

