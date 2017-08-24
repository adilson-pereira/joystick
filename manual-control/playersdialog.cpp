#include "playersdialog.h"
#include "ui_playersdialog.h"

PlayersDialog::PlayersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayersDialog)
{
    ui->setupUi(this);
}

PlayersDialog::~PlayersDialog()
{
    delete ui;
}

int PlayersDialog::getPlayers()
{
    return n_players;
}

//QT Slots
void PlayersDialog::on_ok_cancel_button_accepted()
{
    n_players = ui->player_box->value();
}
