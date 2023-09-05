#include <iostream>
#include "House.h"
#include "Appliance.h"

int main() {
    // Create a House object with space for 3 appliances
    House myHouse(3);

    // Create Appliance objects and add them to the House
    Appliance* fridge = new Appliance(150);
    Appliance* tv = new Appliance(100);
    Appliance* washingMachine = new Appliance(200);

    if (myHouse.addAppliance(fridge)) {
        std::cout << "Fridge added to the house." << std::endl;
    }
    if (myHouse.addAppliance(tv)) {
        std::cout << "TV added to the house." << std::endl;
    }
    if (myHouse.addAppliance(washingMachine)) {
        std::cout << "Washing Machine added to the house." << std::endl;
    }

    // Calculate and display the total power consumption of all appliances in the House
    double totalPowerConsumption = myHouse.getTotalPowerConsumption();
    std::cout << "Total Power Consumption in the House: " << totalPowerConsumption << " kWh" << std::endl;

    // Clean up by deleting the dynamically allocated appliances (owned by the House)
    delete fridge;
    delete tv;
    delete washingMachine;

    return 0;
}
