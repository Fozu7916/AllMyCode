#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <fstream>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    Hide();
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Hide() {
    ui->label->hide();
    ui->OkButton->hide();
    ui->lineEdit->hide();
    ui->frame->hide();
}

void MainWindow::Show() {
    ui->label->show();
    ui->OkButton->show();
    ui->lineEdit->show();
    ui->frame->show();
}

void MainWindow::on_AddButton_clicked()
{
    ui->listWidget->addItem("GOOL");
}


void MainWindow::on_EditButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if(item)
    {
        Show();

    }
}


void MainWindow::on_DeleteButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if(item)
    {
        delete(item);
    }
}


void MainWindow::on_OkButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    QString NewText = ui->lineEdit->text();
    item->setText(NewText);
    Hide();
}



void MainWindow::on_SaveButton_clicked()
{
    std::fstream file;
    std::string filename = "Tasks.txt";
    std::ofstream outputFile(filename.c_str(), std::ios::trunc);
    if (!outputFile.is_open())
    {
        // Если файл не существует, создаем его
        std::ofstream outputFile(filename);
    }
    if(outputFile.is_open())
    {
        for(int i=0;i<ui->listWidget->count();i++)
        {
            QListWidgetItem* item = ui->listWidget->item(i);
                if (item)
                {
                  outputFile << item->text().toStdString() << std::endl;
                }
        }
    }
    outputFile.close();
}

