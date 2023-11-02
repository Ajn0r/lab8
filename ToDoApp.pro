TEMPLATE = app
TARGET = ToDoApp

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    main.h \
    mainwindow.h
