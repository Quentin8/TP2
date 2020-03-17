//
// Created by Utilisateur on 13/02/2020.
//

#include <QtWidgets/QtWidgets>
#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel(QWidget *parent) {
      b1 = new QPushButton("Configure", parent);
      b2 = new QPushButton("Connect", parent);
      b3 = new QPushButton("Disconnect", parent);
      b1->setMinimumSize(100,30);
      b2->setMinimumSize(100,30);
      b3->setMinimumSize(100,30);
      QHBoxLayout* horizontal = new QHBoxLayout();
      horizontal->addWidget(b1);
      horizontal->addWidget(b2);
      horizontal->addWidget(b3);
      this->setLayout(horizontal);
}
