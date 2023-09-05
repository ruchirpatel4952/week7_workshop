#include <iostream>
#include "Appliance.h"

int main() {
    // Create an Appliance object with a power rating of 100
    Appliance fridge(100);

    // Get and set the power rating
    std::cout << "Fridge Power Rating: " << fridge.getPowerRating() << " watts" << std::endl;
    fridge.setPowerRating(150);
    std::cout << "Updated Fridge Power Rating: " << fridge.getPowerRating() << " watts" << std::endl;

    // Turn on and off the appliance
    fridge.turnOn();
    std::cout << "Fridge is on: " << (fridge.isSwitchedOn() ? "Yes" : "No") << std::endl;
    fridge.turnOff();
    std::cout << "Fridge is on: " << (fridge.isSwitchedOn() ? "Yes" : "No") << std::endl;

    // Calculate and display power consumption
    std::cout << "Fridge Power Consumption: " << fridge.getPowerConsumption() << " kWh" << std::endl;

    return 0;
}
