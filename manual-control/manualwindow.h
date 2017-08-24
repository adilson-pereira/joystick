#ifndef MANUALWINDOW_H
#define MANUALWINDOW_H

#include <QMainWindow>
#include <QPixmap>

#include "manualcontrol.h"

namespace Ui {
class ManualWindow;
}

class ManualWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManualWindow(int _player, QWidget *parent = 0);
    ~ManualWindow();

private slots:
    void on_abrir_button_clicked();

private:
    Ui::ManualWindow *ui;
    int player_num;

    //anualControl *control;

    void setEnabledInterface(char c);
};

#endif // MANUALWINDOW_H
