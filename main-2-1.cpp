#include <iostream>
#include "Fridge.h"

int main() {
    // Create a Fridge object with a power rating of 150 and a volume of 200 litres
    Fridge myFridge(150, 200);

    // Get and set the volume
    std::cout << "Fridge Volume: " << myFridge.getVolume() << " litres" << std::endl;
    myFridge.setVolume(250);
    std::cout << "Updated Fridge Volume: " << myFridge.getVolume() << " litres" << std::endl;

    // Calculate and display power consumption
    std::cout << "Fridge Power Consumption: " << myFridge.getPowerConsumption() << " kWh" << std::endl;

    return 0;
}
