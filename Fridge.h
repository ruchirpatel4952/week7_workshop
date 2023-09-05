#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h" // Include the Appliance base class header

class Fridge : public Appliance {
public:
    Fridge();
    Fridge(int powerRating, double volume);

    // Getters and setters
    double getVolume() const;
    void setVolume(double volume);

    // Override the getPowerConsumption method
    double getPowerConsumption() const override;

private:
    double volume; // volume in litres
};

#endif // FRIDGE_H
