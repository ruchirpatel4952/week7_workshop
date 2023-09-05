#include "Fridge.h"
#include "Appliance.h"

Fridge::Fridge() : volume(0.0) {}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

double Fridge::getVolume() const {
    return volume;
}

void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getPowerConsumption() const {
    return get_powerRating() * 24 * (volume / 100);
}
