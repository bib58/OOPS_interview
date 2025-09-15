/*DYNAMIC POLYMORPHISM*/

#include <iostream>
using namespace std;
 
class Car {
protected:
    bool isEngineOn;
    int currentSpeed;
public:
    Car() {
        this->isEngineOn = false;
        this->currentSpeed = 0;
    }
    virtual void accelerate() = 0;
    virtual void brake() = 0;
};

class ManualCar : public Car {
private:
    int currentGear;
public:
    ManualCar() : Car() {
        this->currentGear = 0;
    }
    void shiftGear(int gear) {
        currentGear = gear;
        cout << "Shifted to gear " << currentGear << endl;
    }

    /* Overriding accelerate - Dynamic Polymorphism */
    void accelerate() {
        if (!isEngineOn) {
            cout << "Cannot accelerate! Engine is off." << endl;
            return;
        }
        currentSpeed += 20;
        cout << "Accelerating to " << currentSpeed << " km/h" << endl;
    }

    /* Overriding brake - Dynamic Polymorphism */
    void brake() {
        currentSpeed -= 20;
        if (currentSpeed < 0) currentSpeed = 0;
        cout << "Braking! Speed is now " << currentSpeed << " km/h" << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryLevel;
public:
    ElectricCar() : Car() {
        this->batteryLevel = 100;
    }
    void chargeBattery() {
        batteryLevel = 100;
        cout << "Battery fully charged!" << endl;
    }

    /* Overriding accelerate - Dynamic Polymorphism */
    void accelerate() {
        if (!isEngineOn) {
            cout << "Cannot accelerate! Engine is off." << endl;
            return;
        }
        if (batteryLevel <= 0) {
            cout << "Battery dead! Cannot accelerate." << endl;
            return;
        }
        batteryLevel -= 10;
        currentSpeed += 15;
        cout << "Accelerating to " << currentSpeed << " km/h. Battery at " << batteryLevel << "%." << endl;
    }

    /* Overriding brake - Dynamic Polymorphism */
    void brake() {
        currentSpeed -= 15;
        if (currentSpeed < 0) currentSpeed = 0;
        cout << "Regenerative braking! Speed is now " << currentSpeed << " km/h. Battery at " << batteryLevel << "%." << endl;
    }
};

int main() {
    Car* myManualCar = new ManualCar();
    myManualCar->accelerate();
    myManualCar->accelerate();
    myManualCar->brake();


    cout << "--------------------------" << endl;

    Car* myElectricCar = new ElectricCar();
    myElectricCar->accelerate();
    myElectricCar->accelerate();
    myElectricCar->brake();
  
    delete myManualCar;
    delete myElectricCar;

    return 0;
}