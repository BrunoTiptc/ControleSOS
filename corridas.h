#ifndef CORRIDAS_H
#define CORRIDAS_H

#include <QDialog>

namespace Ui {
class corridas;
}

class corridas : public QDialog
{
    Q_OBJECT

public:
    explicit corridas(QWidget *parent = nullptr);
    ~corridas();

private:
    Ui::corridas *ui;
};

#endif // CORRIDAS_H
