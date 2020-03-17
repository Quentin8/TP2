#include <iostream>
#include "SQLClientWindow.h"
#include "ButtonsPanel.h"
#include "LabeledTextField.h"
#include "ConfigurationDialog.h"

int main(int argc, char **argv)
{
      QApplication app (argc, argv);
      SQLClientWindow test;
      test.show();
      ConfigurationDialog* test2 = new ConfigurationDialog();
      test2->show();

      return app.exec();
}
