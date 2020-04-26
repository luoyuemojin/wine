#ifndef USERREGISTER_H
#define USERREGISTER_H

#include <QWidget>
#include<usersql.h>
#include<datastruct.h>
namespace Ui {
class userregister;
}

class userregister : public QWidget
{
    Q_OBJECT

public:
    explicit userregister(QWidget *parent = 0);
    ~userregister();
     usersql *usersql2;
private slots:
    void on_zhucetijiao_clicked();

    void on_return_2_clicked();

private:
    Ui::userregister *ui;
};

#endif // USERREGISTER_H
