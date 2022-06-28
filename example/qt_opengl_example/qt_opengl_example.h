#pragma once

#include <QtWidgets/QWidget>

class XVideoWidget;

class qt_opengl_example : public QWidget
{
    Q_OBJECT

public:
    qt_opengl_example(QWidget *parent = nullptr);
    ~qt_opengl_example();

    void init();

private:
};
