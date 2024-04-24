#include "telainicial.h"
#include "ui_telainicial.h"
#include "corridas.h"

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

void TelaInicial::on_pushButton_clicked()
{
    corridas form2;
    form2.exec();
}

