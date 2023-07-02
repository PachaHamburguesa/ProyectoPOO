#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "Tester" && password == "1234"){
        QMessageBox::information(this, "Login", "Welcome again");
        hide();
        home_map = new HomeMap(this);
        home_map->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Username or Password incorrect.");
    }
}

