#ifndef SAPPHUNTER_H
#define SAPPHUNTER_H

#include <QDialog>

namespace Ui {
class Sapphunter;
}

class Sapphunter : public QDialog
{
    Q_OBJECT

public:
    explicit Sapphunter(QWidget *parent = nullptr);
    ~Sapphunter();

private:
    Ui::Sapphunter *ui;
};

#endif // SAPPHUNTER_H
