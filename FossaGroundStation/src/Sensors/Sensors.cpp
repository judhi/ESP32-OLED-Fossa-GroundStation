/*
  Sensors.cpp - Class to handle Sensors attached to Ground Station
  
  Contributed by Judhi Prasetyo @kreatif Jam-2021
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

#include "Sensors.h"
int dhtPin = 25;
DHTesp dht;

void Sensors::dhtInit() {
  dht.setup(dhtPin, DHTesp::DHT11);
  delay(100);
  if (dht.getStatus() != 0) {
    Serial.println("DHT sensor error status: " + String(dht.getStatusString()));
	} else {
    Serial.println("DHT sensor is ready!");
  } 
}

float Sensors::getTemp() {
  TempAndHumidity newValues = dht.getTempAndHumidity();
  return newValues.temperature;
}

float Sensors::getHumidity() {
  TempAndHumidity newValues = dht.getTempAndHumidity();
  return newValues.humidity;
}


