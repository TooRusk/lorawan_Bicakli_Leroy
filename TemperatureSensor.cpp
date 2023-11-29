#include "TemperatureSensor.hpp"

TemperatureSensor::TemperatureSensor(I2C& i2c, int address) : i2c_(i2c), address_(address << 1) {
    // constructeur creer objet I2C et une adresse.
}

float TemperatureSensor::readTemperature() {
    char cmd[1] = {0x00};
    char data[2];

    // Écriture de la commande de lecture de la température
    if (i2c_.write(address_, cmd, 1) != 0) {
        printf("Erreur lors de l'écriture de la commande.\n");
        return 1.0;
    }

    // Lecture des données
    if (i2c_.read(address_, data, 2) != 0) {
        printf("Erreur lors de la lecture des données.\n");
        return -1.0;
    }

    // Traitement des données lues (ajustez selon la documentation du capteur)
    float temperature = static_cast<float>((data[0] << 8 | data[1])) / 128.0;
    return temperature;
}
