//
// Created by Utilisateur on 13/02/2020.
//

#include "SQLClientWindow.h"
#include "ButtonsPanel.h"


SQLClientWindow::SQLClientWindow(QWidget* parent) {
      this->setWindowTitle("SQLClient");
      this->setMinimumSize(600,400);
      parent = new QWidget(parent);
      QVBoxLayout* vertical = new QVBoxLayout();
      parent->setLayout(vertical);
      this->setCentralWidget(parent);
      ButtonsPanel* buttons= new ButtonsPanel();
      vertical->addWidget(buttons);
      QTextEdit* notificationPannel = new QTextEdit();
      vertical->addWidget(notificationPannel);
      resultTable = new QTableWidget();
      resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
      resultTable->setRowCount(5);
      resultTable->setColumnCount(3);
      vertical->addWidget(resultTable);
      
}


