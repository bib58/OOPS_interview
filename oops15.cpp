/*STATIC POLYMORPHISM*/

#include <iostream>
using namespace std;

class ManualCar {
private:
    bool isEngineOn;
    int currentSpeed;
public:
    ManualCar() {
        this->isEngineOn = true;
        this->currentSpeed = 0;
    }

    /* Overloading accelerate - Static Polymorphism */
    void accelerate() {
        if (!isEngineOn)  return;
        
        currentSpeed += 20;
        cout << "Accelerating to " << currentSpeed << " km/h" << endl;
    }

    void accelerate(int speed) {
        if (!isEngineOn)  return;

        currentSpeed += speed;
        cout << "Accelerating to " << currentSpeed << " km/h" << endl;
    }
};

int main() {
    ManualCar* myManualCar = new ManualCar();
    myManualCar->accelerate();
    myManualCar->accelerate(40);

    delete myManualCar;

    return 0;
}
