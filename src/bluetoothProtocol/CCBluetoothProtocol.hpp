#pragma once

#include "CCBluetooth.hpp"
#include <stdint.h>

namespace chechat
{

typedef struct
{
  uint16_t token;
} sBluetoothUser;

class CCBluetoothProtocol
{
private:
  std::vector<sBluetoothUser> mUsers;

public:
  CCBluetoothProtocol();
  std::vector<sBluetoothUser> findUsers();
  void connectToUser();
  void connectToGroupChat();
};

};
