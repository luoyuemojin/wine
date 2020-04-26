#ifndef DATASTRUCT
#define DATASTRUCT
#include<QString>
#include<QDate>

class WineInfo{
public:
    QString uid;//酒的ID
    QString name;//酒的名称
    QDate birth;//酒的年份
    int number;//酒的数量
    int years;//酒的年龄
    double values;//酒的价值
};
class UserInfo{
public:
    QString name2;
    QString password;
    QString tel;
    QString email;
};

#endif // DATASTRUCT

