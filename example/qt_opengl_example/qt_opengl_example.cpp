#include "qt_opengl_example.h"
#include <QVBoxLayout>
#include "../../XVideoWidget.h"

qt_opengl_example::qt_opengl_example(QWidget *parent)
    : QWidget(parent)
{
}

void qt_opengl_example::init()
{
    QVBoxLayout* vMainLayout = new QVBoxLayout;
    XVideoWidget* widget = new XVideoWidget(this);

    vMainLayout->addWidget(widget);
    vMainLayout->setContentsMargins(1, 1, 1, 1);

    setLayout(vMainLayout);
}

qt_opengl_example::~qt_opengl_example()
{}
