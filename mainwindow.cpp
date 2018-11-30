#include <iostream>
#include <string>
#include <QColorDialog>

#include <QGridLayout>
#include <QFileDialog>
#include <QPushButton>

#include "mainwindow.h"
#include "ui_mainwindow.h"

int cont_botton[100] = {0}; //contador para cada disciplina

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->cursado->setStyleSheet("QPushButton{ background-color: yellow }");
    ui->ncursado->setStyleSheet("QPushButton{ background-color: red }");
    ui->disponiveis->setStyleSheet("QPushButton{ background-color }");


    //disciplinas com pre-requisitos

    preRequisitos(ui->botton08);
    preRequisitos(ui->botton09);
    preRequisitos(ui->botton10);
    preRequisitos(ui->botton13);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::preRequisitos( QPushButton *botton )
{
    botton->setStyleSheet("QPushButton{ background-color: red }");
}



void MainWindow::on_botton01_clicked()
{
    ui->label_3->setText(QString("%0").arg("Cálculo Diferencial e Integral I"));
}

void MainWindow::on_botton02_clicked()
{
    ui->label_3->setText(QString("%0").arg("Representação Gráfica"));
}

void MainWindow::on_botton03_clicked()
{
    ui->label_3->setText(QString("%0").arg("Introdução à Engenharia Mecatrônica"));
}

void MainWindow::on_botton04_clicked()
{
    ui->label_3->setText(QString("%0").arg("Geometria Analítica"));
}

void MainWindow::on_botton05_clicked()
{
    ui->label_3->setText(QString("%0").arg("Física I"));
}

void MainWindow::on_botton06_clicked()
{
    ui->label_3->setText(QString("%0").arg("Comunicação e Expressão"));
}

void MainWindow::on_botton07_clicked()
{
    ui->label_3->setText(QString("%0").arg("Programação I"));
}




void MainWindow::on_checkBox01_clicked()
{
    setColor(cont_botton[0], ui->botton01);
}

void MainWindow::on_checkBox02_clicked()
{
    setColor(cont_botton[1], ui->botton02);
}

void MainWindow::on_checkBox03_clicked()
{
    setColor(cont_botton[2], ui->botton03);
}

void MainWindow::on_checkBox04_clicked()
{
    setColor(cont_botton[3], ui->botton04);
}

void MainWindow::on_checkBox05_clicked()
{
    setColor(cont_botton[4], ui->botton05);
}

void MainWindow::on_checkBox06_clicked()
{
    setColor(cont_botton[5], ui->botton06);
}

void MainWindow::on_checkBox07_clicked()
{
    setColor(cont_botton[6], ui->botton07);
}

void MainWindow::on_checkBox08_clicked()
{
    setColor(cont_botton[7], ui->botton08);
    if(!ui->checkBox08->checkState())
    {
        ui->botton08->setStyleSheet("QPushButton{ background-color: red }");
    }
}

void MainWindow::on_checkBox09_clicked()
{
    setColor(cont_botton[8], ui->botton09);
    if(!ui->checkBox09->checkState())
    {
        ui->botton09->setStyleSheet("QPushButton{ background-color: red }");
    }
}

void MainWindow::on_checkBox10_clicked()
{
    setColor(cont_botton[9], ui->botton10);
}

void MainWindow::on_checkBox11_clicked()
{
    setColor(cont_botton[10], ui->botton11);
}

void MainWindow::on_checkBox12_clicked()
{
    setColor(cont_botton[11], ui->botton12);
}

void MainWindow::on_checkBox13_clicked()
{
    setColor(cont_botton[12], ui->botton13);
}

void MainWindow::setColor(int &cont, QPushButton *botton)
{

    cont++;
    botton->setStyleSheet("QPushButton{ background-color: yellow }");


    if( cont > 1 )
    {
        botton->setStyleSheet("QPushButton{ background-color }");
        cont = 0;
    }

    return;
}
