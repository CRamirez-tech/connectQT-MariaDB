#include "connectionmariadb.h"
#include "ui_connectionmariadb.h"

ConnectionMariaDB::ConnectionMariaDB(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ConnectionMariaDB)
{
    ui->setupUi(this);
    bool load = initDatabase();
    if (load) {
        initComponents();
    } else {
        QMessageBox::information(this,"Connection","Database Connection Refused");
        QCoreApplication::exit();
    }
}

ConnectionMariaDB::~ConnectionMariaDB()
{
    delete ui;
}
bool ConnectionMariaDB::initDatabase(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("gps");
    db.setUserName("root");
    db.setPassword("database");
    return db.open();
}
void ConnectionMariaDB::initComponents(){
    qmodel = new QSqlQueryModel();
    qmodel->setQuery("SELECT var_x, var_y, texto FROM `gps`.`texto_page` LIMIT 1000;");
    ui->tableView->setModel(qmodel);
    ui->tableView->show();
}


