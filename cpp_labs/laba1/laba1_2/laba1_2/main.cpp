#include <QApplication>
#include "convertDialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ConvertDialog *dialog = new ConvertDialog();
    dialog->show();

    return app.exec();
}
