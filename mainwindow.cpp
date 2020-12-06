#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "desk.h"
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


void MainWindow::on_action_7_triggered()//выбраны курицы
{
   DESK team;
   team.setTEAM(1);
}

void MainWindow::on_action_8_triggered()//выбраны лисы
{
    DESK team;
    team.setTEAM(2);
}
