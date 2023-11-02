#include <QPushButton>
#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent)
    : QWidget{parent}
{
    // Set size of window
    setFixedSize(500, 700);

    // Listwidet for all todo items
    m_listWidget = new QListWidget(this);

    // Line edit for todo items inputs
    toDoInput = new QLineEdit(this);


    // button to add new items
    addBtn = new QPushButton("Add", this);
    connect(addBtn, &QPushButton::clicked, this, &mainWindow::addItemToList);
}
void mainWindow::addItemToList(){

    QString text = toDoInput->text();
    m_listWidget->addItem(text);
    toDoInput->clear();
}
