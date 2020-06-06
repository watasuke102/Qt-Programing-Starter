#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_button_back_clicked()
{
    if(page != 0)
    {
        page--;
        ui->stackedWidget->setCurrentIndex(page);
    }
}

void MainWindow::on_button_next_clicked()
{
    page++;
    ui->stackedWidget->setCurrentIndex(page);
}

void MainWindow::on_button_exit_clicked()
{
    int stat=QMessageBox::question(this,tr("Exit"), tr("Are you sure to exit?"));
    if(stat == QMessageBox::Yes)
        exit(0);
}
