#ifndef TELAINICIAL_H
#define TELAINICIAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TelaInicial;
}
QT_END_NAMESPACE

class TelaInicial : public QMainWindow
{
    Q_OBJECT

public:
    TelaInicial(QWidget *parent = nullptr);
    ~TelaInicial();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TelaInicial *ui;
};
#endif // TELAINICIAL_H
