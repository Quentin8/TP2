//
// Created by Utilisateur on 12/03/2020.
//

#include <QtWidgets/QHBoxLayout>
#include "LabeledTextField.h"

LabeledTextField::LabeledTextField(QWidget *parent) {
      QHBoxLayout* horizontal= new QHBoxLayout();
      label = new QLabel("User : ");
      text = new QTextEdit("");
      text->setMinimumHeight(25);
      horizontal->addWidget(label);
      horizontal->addWidget(text);
      parent->setLayout(horizontal);
}
