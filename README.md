# SoilMoistureSensorCalibratedSerial
A sketch for a calibrated arduino soil moisture sensor which outputs data via serial.

## Status

|   | lts | master | dev |
| ------------- | ------------- | ------------- | ------------- |
| Travis CI Tests  | [![Build Status](https://travis-ci.org/GrowSense/SoilMoistureSensorCalibratedSerial.svg?branch=lts)](https://travis-ci.org/GrowSense/SoilMoistureSensorCalibratedSerial) | [![Build Status](https://travis-ci.org/GrowSense/SoilMoistureSensorCalibratedSerial.svg?branch=master)](https://travis-ci.org/GrowSense/SoilMoistureSensorCalibratedSerial) | [![Build Status](https://travis-ci.org/GrowSense/SoilMoistureSensorCalibratedSerial.svg?branch=dev)](https://travis-ci.org/GrowSense/SoilMoistureSensorCalibratedSerial) |
| Jenkins Software Build  | [![Build Status](http://growsense.io:8090/buildStatus/icon?job=GrowSense%2FSoilMoistureSensorCalibratedSerial%2Flts)](http://growsense.io:8090/job/GrowSense/job/SoilMoistureSensorCalibratedSerial/job/lts/) | [![Build Status](http://growsense.io:8090/buildStatus/icon?job=GrowSense%2FSoilMoistureSensorCalibratedSerial%2Fmaster)](http://growsense.io:8090/job/GrowSense/job/SoilMoistureSensorCalibratedSerial/job/master/)  | [![Build Status](http://growsense.io:8090/buildStatus/icon?job=GrowSense%2FSoilMoistureSensorCalibratedSerial%2Fdev)](http://growsense.io:8090/job/GrowSense/job/SoilMoistureSensorCalibratedSerial/job/dev/) |
| Jenkins Hardware Tests | [![Build Status](http://growsense.io:8100/buildStatus/icon?job=GrowSense%2FSoilMoistureSensorCalibratedSerial%2Flts&subject=tests)](http://growsense.io:8100/job/GrowSense/job/SoilMoistureSensorCalibratedSerial/job/lts/) | [![Build Status](http://growsense.io:8100/buildStatus/icon?job=GrowSense%2FSoilMoistureSensorCalibratedSerial%2Fmaster&subject=tests)](http://growsense.io:8100/job/GrowSense/job/SoilMoistureSensorCalibratedSerial/job/master/)  | [![Build Status](http://growsense.io:8100/buildStatus/icon?job=GrowSense%2FSoilMoistureSensorCalibratedSerial%2Fdev&subject=tests)](http://growsense.io:8100/job/GrowSense/job/SoilMoistureSensorCalibratedSerial/job/dev/) |

## Clone the Index
If you intend to use more than one software component from the GrowSense group it is recommended you clone the entire index.
This repository is included as a submodule along with a number of others you may need, or find useful.

You can find it here:
https://github.com/GrowSense/Index

To clone the index run:

```
git clone --recursive git://github.com/GrowSense/Index.git GrowSense/Index
```

Then navigate to the directory:
```
cd GrowSense/Index/sketches/monitor/SoilMoistureSensorCalibratedSerial
```

## Clone this Repository Only
To clone this repository only choose either...

### Using the same directory structure as the index (recommended):

```
git clone https://github.com/GrowSense/SoilMoistureSensorCalibratedSerial.git GrowSense/Index/sketches/monitor/SoilMoistureSensorCalibratedSerial
```
Then navigate to the directory:
```
cd GrowSense/Index/sketches/monitor/SoilMoistureSensorCalibratedSerial
```

### Using the current directory:

```
git clone https://github.com/GrowSense/SoilMoistureSensorCalibratedSerial.git
```

## Prepare and Initialize
Note: This only has to be done once before the first build. It doesn't need to be repeated unless there has been an update.

Run the prepare script to install required system software:

```
sh prepare.sh
```

Run the init script to get required project libraries:

```
sh init.sh
```

## Build and Upload
Run the build script to compile the sketch:

```
sh build.sh
```

Run the upload script to upload the sketch to the attached arduino based device:

```
sh upload.sh
```

## Monitor Serial Output

Run the monitor serial output sketch to view the data coming from the device:

```
sh monitor-serial.sh
```

Press CTRL+C to close the serial monitor.

## Run Automated Tests
With the automated test hardware connected run the test script:

```
sudo sh test.sh
```