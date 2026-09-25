#pragma once

using namespace chechat;

class CCBluetooth
{
public:
  CCBluetooth();
  void init();
  void transferData();
  void transferDataAsync();
  void receiveData();
  void receiveDataAsync();
};
