#include "mainwindow.h"
#include "json.hpp"
#include <QApplication>
#include <QLabel>

using json = nlohmann::json;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

  /*  json j;
    j["name"] = "MyName";

    QLabel *label = new QLabel("hello");
    label->resize(400,400);
    label->show();*/

    return a.exec();
}
