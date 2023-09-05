#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    // Getters and setters
    int getPowerRating() const;
    void setPowerRating(int powerRating);
    bool isSwitchedOn() const;  // Rename the member function

    // Member functions
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption() const;
 
private:
    int powerRating;
    bool isOn;  // Rename the data member
};

#endif // APPLIANCE_H
