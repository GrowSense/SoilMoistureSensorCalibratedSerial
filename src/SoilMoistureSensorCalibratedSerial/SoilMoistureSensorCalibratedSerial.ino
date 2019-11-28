#include <Arduino.h>
#include <EEPROM.h>

#include <duinocom2.h>

#include "Common.h"
#include "SoilMoistureSensor.h"
#include "DeviceName.h"
#include "Commands.h"
#include "SerialOutput.h"

void setup()
{
  Serial.begin(9600);

  Serial.println("Starting soil moisture monitor");
  
  loadDeviceNameFromEEPROM();
  
  serialPrintDeviceInfo();

  setupSoilMoistureSensor();

  serialOutputIntervalInSeconds = soilMoistureSensorReadingIntervalInSeconds;
  
  Serial.println("Online");
}

void loop()
{
  if (isDebugMode)
    loopNumber++;

  serialPrintLoopHeader();

  checkCommand();

  takeSoilMoistureSensorReading();

  serialPrintData();

  serialPrintLoopFooter();

  delay(1);
}

