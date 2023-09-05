#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    // Getters and setters
    int get_powerRating() const;
    void set_powerRating(int powerRating);
    bool get_isOn() const;  // Rename the member function

    // Member functions
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption() const;
 
private:
    int powerRating;
    bool isOn;  // Rename the data member
};

#endif // APPLIANCE_H
