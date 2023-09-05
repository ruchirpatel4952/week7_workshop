#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
public:
    House();
    House(int numAppliances);
    ~House(); // Destructor to release resources

    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption() const;

private:
    Appliance** appliances;
    int numAppliances;
    int numAddedAppliances;
};

#endif // HOUSE_H
