
#include <QApplication>

#include "../include/connection.h"
#include "../include/tableeditor.h"

//! [0]
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    if (!createConnection())
        return 1;

    TableEditor editor("person");
    editor.show();
    return app.exec();
}
