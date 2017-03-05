#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <ctime>

int time_period = 0;

using namespace std;

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


void MainWindow::on_start_stop_clicked()
{
    ui->period_time->display("12");
    ui->period_time->update();
    chrono::seconds quarter_time(720);


    auto start_time = chrono::high_resolution_clock::now();
    for(;;){
        auto current_time = chrono::high_resolution_clock::now();

        auto diff_time = chrono::duration_cast<chrono::seconds>(current_time - start_time).count();

        cout << "Program has been running for " << diff_time << " seconds\n";
    }

}
