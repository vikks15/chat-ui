#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "json.hpp"

#include "QStandardItemModel"
#include "QStandardItem"
#include "QTableView"
using json = nlohmann::json;

QStandardItemModel *model = new QStandardItemModel;
QStandardItem *item;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//-------tableView settings-------------------
    ui->tableView->setModel(model);
    item = new QStandardItem(QString(""));
    model->setItem(0, 1, item);

    ui->tableView->setShowGrid(false);
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->verticalHeader()->hide();

    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
//---------------------------------------------

}

MainWindow::~MainWindow()
{
    delete ui;
}

int next_message_number = 0;

void MainWindow::on_SendBt_clicked()
{

    QString text = ui->MessageField->toPlainText();

    item = new QStandardItem(text);
    item->setTextAlignment(Qt::AlignRight);
    model->setItem(next_message_number, 1, item);
    ui->MessageField->clear();
    next_message_number++;

    //----------show answer - not here------------------
    item = new QStandardItem(QString("hey"));
    model->setItem(next_message_number, 0, item);
    next_message_number++;
    //-------------------------------------------------
}
