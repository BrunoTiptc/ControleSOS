#include "corridas.h"
#include "ui_corridas.h"

corridas::corridas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::corridas)
{
    ui->setupUi(this);
}

corridas::~corridas()
{
    delete ui;
}
