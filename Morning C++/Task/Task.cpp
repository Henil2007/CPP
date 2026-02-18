#include <iostream>
using namespace std;

class Vehicle {
protected:
    int fuelLevel;

public:
    Vehicle() {
        fuelLevel = 100;
    }

    void startEngine() {
        cout << "Engine Started. Fuel Level: " << fuelLevel << endl;
    }
};

class LandVehicle : virtual public Vehicle {
protected:
    int wheelCount;

public:
    LandVehicle() {
        wheelCount = 4;
    }

    void drive() {
        cout << "Driving on land with " << wheelCount << " wheels." << endl;
    }
};

class WaterVehicle : virtual public Vehicle {
public:
    void sail() {
        cout << "Sailing on water." << endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    void showType() {
        cout << "This is an Amphibious Vehicle." << endl;
    }
};

class MilitaryAmphibian : public AmphibiousVehicle {
private:
    string armorSystem;
    string weaponsSystem;

public:
    MilitaryAmphibian() {
        armorSystem = "Heavy Armor";
        weaponsSystem = "Missile Launcher";
    }

    void showMilitaryFeatures() {
        cout << "Armor: " << armorSystem << endl;
        cout << "Weapons: " << weaponsSystem << endl;
    }
};

int main() {
    MilitaryAmphibian obj;

    obj.startEngine();
    obj.drive();
    obj.sail();
    obj.showType();
    obj.showMilitaryFeatures();

    return 0;
}
