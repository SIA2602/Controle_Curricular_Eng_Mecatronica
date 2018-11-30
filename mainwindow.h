#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QFileDialog>
#include <QPushButton>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_botton01_clicked();

    void preRequisitos( QPushButton *botton );

    void setColor(int &cont, QPushButton *botton);

    void on_botton02_clicked();

    void on_botton03_clicked();

    void on_botton04_clicked();

    void on_botton05_clicked();

    void on_botton06_clicked();

    void on_botton07_clicked();

    void on_checkBox01_clicked();

    void on_checkBox02_clicked();

    void on_checkBox03_clicked();

    void on_checkBox04_clicked();

    void on_checkBox05_clicked();

    void on_checkBox06_clicked();

    void on_checkBox07_clicked();

    void on_checkBox08_clicked();

    void on_checkBox09_clicked();

    void on_checkBox10_clicked();

    void on_checkBox11_clicked();

    void on_checkBox12_clicked();

    void on_checkBox13_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
