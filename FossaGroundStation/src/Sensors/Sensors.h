/*
  Sensors.h - Class to handle Sensors attached to Ground Station
  
  Contributed by Judhi Prasetyo @kreatif Jan-2021
  Copyright (C) 2020 @G4lile0, @gmag12 and @dev_4m1g0

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef SENSORS_H
#define SENSORS_H

#include "DHTesp.h"
#include "Ticker.h"
#include "../Status.h"
#include "../Mqtt/MQTT_Client.h"

extern Status status;

class Sensors {
public:
 static Sensors& getInstance()
  {
    static Sensors instance; 
    return instance;
  }
  void dhtInit();
  float getTemp();
  float getHumidity();
};

#endif
