#include "House.h"

House::House() : appliances(), numAppliances(0), numAddedAppliances(0) {}

House::House(int numAppliances) : numAppliances(numAppliances), numAddedAppliances(0) {
    appliances = new Appliance*[numAppliances];
}

House::~House() {
    // Release the resources (delete each Appliance object)
    for (int i = 0; i < numAddedAppliances; i++) {
        delete appliances[i];
    }
    delete[] appliances;
}

bool House::addAppliance(Appliance* appliance) {
    if (numAddedAppliances < numAppliances) {
        appliances[numAddedAppliances] = appliance;
        numAddedAppliances++;
        return true;
    }
    return false; // House is full
}

double House::getTotalPowerConsumption() const {
    double totalPowerConsumption = 0.0;
    for (int i = 0; i < numAddedAppliances; i++) {
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}
