#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>

class mainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit mainWindow(QWidget *parent = nullptr);

private slots:
    void addItemToList();

private:
    QListWidget *m_listWidget;
    QPushButton *addBtn;
    QLineEdit *toDoInput;

signals:
};

#endif // MAINWINDOW_H
