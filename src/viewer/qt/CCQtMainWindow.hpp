#pragma once

#include "CCUi.hpp"

#include <QtWidgets>
#include <QtCore>

class CCQtMainWindow : public CCUi
{
  
public:
  CCQtMainWindow();
  void init();
  int start(); // return value for main
}
