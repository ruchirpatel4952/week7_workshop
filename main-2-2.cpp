#include <iostream>
#include "TV.h"

int main() {
    // Create a TV object with a power rating of 100 and a screen size of 42 inches
    TV myTV(100, 42);

    // Get and set the screen size
    std::cout << "TV Screen Size: " << myTV.getScreenSize() << " inches" << std::endl;
    myTV.setScreenSize(55);
    std::cout << "Updated TV Screen Size: " << myTV.getScreenSize() << " inches" << std::endl;

    // Calculate and display power consumption
    std::cout << "TV Power Consumption: " << myTV.getPowerConsumption() << " kWh" << std::endl;

    return 0;
}
