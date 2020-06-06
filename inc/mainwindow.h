#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_button_back_clicked();

    void on_button_next_clicked();

    void on_button_exit_clicked();

private:
    int page=0;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
