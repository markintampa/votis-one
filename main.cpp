#include "mainwindow.h"
#include <QApplication>
#include "ntv2qtpreview.h"

#include <QtCore>
#if (QT_VERSION >= QT_VERSION_CHECK(5, 0, 0))
    #include <QtWidgets>
#else
    #include <QtGui>
#endif

int main (int argc, char * argv [])
{
    QApplication	app (argc, argv);
    NTV2QtPreview	window;

    window.setWindowTitle ("NTV2 Qt Preview");
    window.show ();

    return app.exec ();

}
