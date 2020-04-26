#ifndef WEIGHTFORM_H
#define WEIGHTFORM_H

#include <QWidget>
#include "serialrfid.h"
#include "winesql.h"
namespace Ui {
class WeightForm;
}

class WeightForm : public QWidget
{
    Q_OBJECT

public:
    explicit WeightForm(QWidget *parent = 0);
    ~WeightForm();

private:
    Ui::WeightForm *ui;
    SerialRfid * sr;
    FeedSql * feedsql;
public :
    void setFeedSql(FeedSql *f);

private slots:
    void on_searchButton_clicked();
    void on_getUidButton_clicked();
    void on_pushButton_clicked();
};

#endif // WEIGHTFORM_H
