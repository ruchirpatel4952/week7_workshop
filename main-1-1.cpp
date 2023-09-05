#include <iostream>
#include "Appliance.h"

int main() {
    // Create an Appliance object with a power rating of 100
    Appliance* appliance = new Appliance(100);

    // Get and set the power rating
    std::cout << "Initial power rating: " << appliance->get_powerRating() << " watts" << std::endl;
    appliance->set_powerRating(200);
    std::cout << "New power rating: " << appliance->get_powerRating() << " watts" << std::endl;

    // Check if the appliance is on
    std::cout << "Is appliance on? " << (appliance->get_isOn() ? "Yes" : "No") << std::endl;

    // Turn on the appliance
    appliance->turnOn();
    std::cout << "Is appliance on? " << (appliance->get_isOn() ? "Yes" : "No") << std::endl;

    // Turn off the appliance
    appliance->turnOff();
    std::cout << "Is appliance on? " << (appliance->get_isOn() ? "Yes" : "No") << std::endl;

    // Calculate and display power consumption
    std::cout << "Appliance Power Consumption: " << appliance->getPowerConsumption() << " kWh" << std::endl;

    // Clean up by deleting the dynamically allocated object
    delete appliance;

    return 0;
}
