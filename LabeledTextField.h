//
// Created by Utilisateur on 12/03/2020.
//

#ifndef TP2_LABELEDTEXTFIELD_H
#define TP2_LABELEDTEXTFIELD_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QTextEdit>
#include <QLabel>
#include <QWidget>

class LabeledTextField : public QWidget{
private:
    QLabel* label;
    QTextEdit* text;
public:
    LabeledTextField(QWidget* parent = NULL);


};


#endif //TP2_LABELEDTEXTFIELD_H
