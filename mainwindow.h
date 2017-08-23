#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playersdialog.h"
#include "manualwindow.h"
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
    void on_ok_button_clicked();

private:
    Ui::MainWindow *ui;
    Ui::PlayersDialog *players_ui;
    Ui::ManualWindow **manual_uis;
};

#endif // MAINWINDOW_H
