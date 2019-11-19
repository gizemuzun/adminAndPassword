#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonLogin_clicked()
{
    QString username = ui->lineEditUserName->text();
    QString password = ui->lineEditPassword->text();

    if(username == "Gizem" && password == "Papatya146") {
        QMessageBox::information(this, "Login", "Username and password is correct! :)");
            }
    else{

        QMessageBox::warning(this,"Login","Username and password is not correct!");
    }

}
