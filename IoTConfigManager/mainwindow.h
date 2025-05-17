#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "user.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const User &user, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loadDevices();
    void onAddButtonClicked();

private:
    Ui::MainWindow *ui;
    User currentUser;
};

#endif // MAINWINDOW_H
