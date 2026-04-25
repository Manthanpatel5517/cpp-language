#include <iostream>
using namespace std;

class Vehicle{
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

public:
    static int totalVehicles;

    Vehicle()
    {
        vehicleID = 0;
        manufacturer = "Unknown";
        model = "Unknown";
        year = 0;
        totalVehicles++;
    }

    Vehicle(int id, string mfg, string mdl, int yr)
    {
        vehicleID = id;
        manufacturer = mfg;
        model = mdl;
        year = yr;
        totalVehicles++;
    }

    virtual void display()
    {
        cout << "\nID: " << vehicleID;
        cout << "\nManufacturer: " << manufacturer;
        cout << "\nModel: " << model;
        cout << "\nYear: " << year;
    }

    int getID()
    {
        return vehicleID;
    }

    virtual ~Vehicle()
    {
        totalVehicles--;
    }
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle{
protected:
    string fuelType;

public:
    Car(int id, string mfg, string mdl, int yr, string fuel)
        : Vehicle(id, mfg, mdl, yr)
    {
        fuelType = fuel;
    }

    void display()
    {
        Vehicle::display();
        cout << "\nFuel Type: " << fuelType;
    }
};

class ElectricCar : public Car{
protected:
    int batteryCapacity;

public:
    ElectricCar(int id, string mfg, string mdl, int yr, string fuel, int battery)
        : Car(id, mfg, mdl, yr, fuel)
    {
        batteryCapacity = battery;
    }

    void display()
    {
        Car::display();
        cout << "\nBattery: " << batteryCapacity << " kWh";
    }
};

class SportsCar : public ElectricCar{
    int topSpeed;

public:
    SportsCar(int id, string mfg, string mdl, int yr, string fuel, int battery, int speed)
        : ElectricCar(id, mfg, mdl, yr, fuel, battery)
    {
        topSpeed = speed;
    }

    void display()
    {
        ElectricCar::display();
        cout << "\nTop Speed: " << topSpeed << " km/h";
    }
};

class Aircraft{
protected:
    int flightRange;

public:
    Aircraft(int range)
    {
        flightRange = range;
    }

    void showAircraft()
    {
        cout << "\nFlight Range: " << flightRange << " km";
    }
};

class FlyingCar : public Car, public Aircraft{
public:
    FlyingCar(int id, string mfg, string mdl, int yr, string fuel, int range)
        : Car(id, mfg, mdl, yr, fuel), Aircraft(range) {}

    void display()
    {
        Car::display();
        showAircraft();
    }
};

class Sedan : public Car{
public:
    Sedan(int id, string mfg, string mdl, int yr, string fuel)
        : Car(id, mfg, mdl, yr, fuel) {}
};

class SUV : public Car{
public:
    SUV(int id, string mfg, string mdl, int yr, string fuel)
        : Car(id, mfg, mdl, yr, fuel) {}
};

class VehicleRegistry{
    Vehicle *vehicles[50];
    int count;

public:
    VehicleRegistry()
    {
        count = 0;
    }

    void addVehicle(Vehicle *v)
    {
        if (count < 50)
        {
            vehicles[count++] = v;
            cout << "\nVehicle Added Successfully!";
        }
    }

    void displayAll()
    {
        for (int i = 0; i < count; i++)
        {
            vehicles[i]->display();
            cout << "\n------------------";
        }
    }

    void searchByID(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (vehicles[i]->getID() == id)
            {
                vehicles[i]->display();
                return;
            }
        }
        cout << "\nVehicle Not Found!";
    }
};

int main(){
    
    VehicleRegistry registry;
    int choice;

    do
    {
        cout << "\n\n1. Add Car";
        cout << "\n2. Add Electric Car";
        cout << "\n3. Add Sports Car";
        cout << "\n4. Add Flying Car";
        cout << "\n5. View All";
        cout << "\n6. Search by ID";
        cout << "\n0. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            int id, year;
            string mfg, model, fuel;

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter Manufacturer: ";
            cin >> mfg;

            cout << "Enter Model: ";
            cin >> model;

            cout << "Enter Year: ";
            cin >> year;
            
            cout << "Enter Fuel Type: ";
            cin >> fuel;

            if (choice == 1)
            {
                registry.addVehicle(new Car(id, mfg, model, year, fuel));
            }
            else if (choice == 2)
            {
                int battery;
                cout << "Battery: ";
                cin >> battery;
                registry.addVehicle(new ElectricCar(id, mfg, model, year, fuel, battery));
            }
            else if (choice == 3)
            {
                int battery, speed;
                cout << "Battery: ";
                cin >> battery;
                cout << "Top Speed: ";
                cin >> speed;
                registry.addVehicle(new SportsCar(id, mfg, model, year, fuel, battery, speed));
            }
            else if (choice == 4)
            {
                int range;
                cout << "Flight Range: ";
                cin >> range;
                registry.addVehicle(new FlyingCar(id, mfg, model, year, fuel, range));
            }
        }
        else if (choice == 5)
        {
            registry.displayAll();
        }
        else if (choice == 6)
        {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            registry.searchByID(id);
        }

    } while (choice != 0);

    return 0;
}