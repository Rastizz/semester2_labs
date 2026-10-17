#ifndef window_h
#define window_h
#include "area.h"
#include <QMainWindow>>
#include <QPushButton>

class Window : public QWidget
{
protected:

    Area * area;         // область отображения рисунка
    QPushButton * btn;
public:
    Window();
};
#endif
