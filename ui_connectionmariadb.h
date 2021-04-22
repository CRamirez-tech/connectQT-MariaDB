/********************************************************************************
** Form generated from reading UI file 'connectionmariadb.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONMARIADB_H
#define UI_CONNECTIONMARIADB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectionMariaDB
{
public:
    QTableView *tableView;

    void setupUi(QWidget *ConnectionMariaDB)
    {
        if (ConnectionMariaDB->objectName().isEmpty())
            ConnectionMariaDB->setObjectName(QString::fromUtf8("ConnectionMariaDB"));
        ConnectionMariaDB->resize(800, 600);
        tableView = new QTableView(ConnectionMariaDB);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 10, 561, 461));

        retranslateUi(ConnectionMariaDB);

        QMetaObject::connectSlotsByName(ConnectionMariaDB);
    } // setupUi

    void retranslateUi(QWidget *ConnectionMariaDB)
    {
        ConnectionMariaDB->setWindowTitle(QCoreApplication::translate("ConnectionMariaDB", "ConnectionMariaDB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionMariaDB: public Ui_ConnectionMariaDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONMARIADB_H
