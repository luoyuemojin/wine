#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include<usersql.h>
#include<stdlib.h>
#include<time.h>
#include<mainwindow.h>
#include<userregister.h>
#include"usersql.h"
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    usersql *usersql1;
    bool dengluyanzhneg;
    int yanzhengma2;
    MainWindow *mainwindows;
    userregister *userr;
private slots:
    void on_yanzheng4_clicked();

    void on_login_2_clicked();

    void on_reginter_clicked();

private:

    Ui::login *ui;
};

#endif // LOGIN_H
