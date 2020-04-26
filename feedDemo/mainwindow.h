#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QWidget>
#include "comform.h"
#include "registerform.h"
#include "seeform.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    WineSql * f;
    QList<QAction *> *actionList;
    QList<QWidget *> *widgetList;
private:
    Ui::MainWindow *ui;
private slots:
    void actionSlot();



};

#endif // MAINWINDOW_H
