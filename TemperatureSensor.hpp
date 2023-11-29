#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "mbed.h"

class TemperatureSensor {
public:
    TemperatureSensor(I2C& i2c, int address);

    float readTemperature();

private:
    I2C& i2c_;
    int address_;
};

#endif // TEMPERATURE_SENSOR_H
