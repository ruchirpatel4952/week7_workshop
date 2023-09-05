#include "TV.h"

TV::TV() : screenSize(0.0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

double TV::getScreenSize() const {
    return screenSize;
}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getPowerConsumption() const {
    return get_powerRating() * (screenSize / 10);
}
