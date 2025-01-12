#include "mainwindow.h"
#include <QApplication>
#include <fstream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    std::fstream file;
    std::string filename = "Tasks.txt";
    std::ifstream inputFile(filename);
    if (!inputFile.is_open())
    {
        // Если файл не существует, создаем его
        std::ofstream outputFile(filename);
    }
    if(inputFile.is_open())
    {
        std::string line;
        while (std::getline(inputFile, line))
        {
          w.findChild<QListWidget*>("listWidget")->addItem(QString::fromStdString(line));
        }
    }
    inputFile.close();
    return a.exec();
}
