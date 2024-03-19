#include "telainicial.h"
#include "ui_telainicial.h"
#include <QPixmap>

TelaInicial::TelaInicial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaInicial)
{
    ui->setupUi(this);

}

TelaInicial::~TelaInicial()
{
    delete ui;
}
