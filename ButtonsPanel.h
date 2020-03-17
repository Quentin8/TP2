//
// Created by Utilisateur on 13/02/2020.
//

#ifndef TP2_BUTTONSPANEL_H
#define TP2_BUTTONSPANEL_H


#include <QtWidgets/qwidget.h>
#include <QPushButton>
#include <QVBoxLayout>

class ButtonsPanel : public QWidget {
Q_OBJECT
public:
    ButtonsPanel(QWidget* parent = nullptr );
private:
    QPushButton* b1;
    QPushButton* b2;
    QPushButton* b3;
};


#endif //TP2_BUTTONSPANEL_H
