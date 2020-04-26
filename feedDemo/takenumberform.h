#ifndef JISHUFORM_H
#define JISHUFORM_H

#include <QWidget>
#include "serialrfid.h"
#include "winesql.h"
namespace Ui {
class takenumberForm;
}

class takenumberForm : public QWidget
{
    Q_OBJECT

public:
    explicit takenumberForm(QWidget *parent = 0);
    ~takenumberForm();

private slots:
    void on_outCount_clicked();

    void on_inCount_clicked();

    void on_finishCount_clicked();

private:
    Ui::takenumberForm *ui;
    SerialRfid *sf;

    bool isout;
};

#endif // JISHUFORM_H
