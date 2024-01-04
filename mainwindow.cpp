#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "member.h"

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


void MainWindow::on_searchMemberBtn_clicked()
{
    Member m1;
    m1.test();
}

