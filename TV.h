#ifndef TV_H
#define TV_H

#include "Appliance.h" // Include the Appliance base class header

class TV : public Appliance {
public:
    TV();
    TV(int powerRating, double screenSize);

    // Getters and setters
    double getScreenSize() const;
    void setScreenSize(double screenSize);

    // Override the getPowerConsumption method
    double getPowerConsumption() const override;

private:
    double screenSize; // screen size in inches
};

#endif // TV_H
