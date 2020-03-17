//
// Created by Utilisateur on 13/02/2020.
//

#ifndef TP2_SQLCLIENTWINDOW_H
#define TP2_SQLCLIENTWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QtWidgets>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTextEdit>

class SQLClientWindow : public QMainWindow{
Q_OBJECT
public:
    SQLClientWindow(QWidget* parent = nullptr);
private:
    QTableWidget* resultTable;


};


#endif //TP2_SQLCLIENTWINDOW_H
