#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void Hide();
    void Show();
    void on_AddButton_clicked();
    void on_EditButton_clicked();
    void on_DeleteButton_clicked();
    void on_OkButton_clicked();

    void on_SaveButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
