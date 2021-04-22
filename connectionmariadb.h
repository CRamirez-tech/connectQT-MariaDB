#ifndef CONNECTIONMARIADB_H
#define CONNECTIONMARIADB_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class ConnectionMariaDB; }
QT_END_NAMESPACE

class ConnectionMariaDB : public QWidget
{
    Q_OBJECT

public:
    ConnectionMariaDB(QWidget *parent = nullptr);
    ~ConnectionMariaDB();

private:
    Ui::ConnectionMariaDB *ui;
    QSqlDatabase db;
    QSqlQueryModel *qmodel;
    bool initDatabase();
    void initComponents();
};
#endif // CONNECTIONMARIADB_H
