// Distance using Dm and Db with friend function
#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
    float meters;
    float centimeters;

public:
    DM(float m = 0, float cm = 0) : meters(m), centimeters(cm) {}

    void read() {
        cout << "Enter distance in meters : ";
        cin >> meters;
        cout<< "Enter distance in centimeters : ";
        cin >> centimeters;
    }

    void display() const {
        cout << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    friend DM add(const DM &dm, const DB &db);
};

class DB {
    float feet;
    float inches;

public:
    DB(float ft = 0, float in = 0) : feet(ft), inches(in) {}

    void read() {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() const {
        cout << feet << " feet and " << inches << " inches" << endl;
    }

    friend DM add(const DM &dm, const DB &db);
};

DM add(const DM &dm, const DB &db) {
    // Convert DB to meters and centimeters
    float totalMeters = dm.meters + (db.feet * 0.3048) + (db.inches * 0.0254);
    float totalCentimeters = dm.centimeters + (totalMeters * 100);

    // Normalize meters and centimeters
    totalMeters = int(totalCentimeters) / 100;
    totalCentimeters = int(totalCentimeters) % 100;

    return DM(totalMeters, totalCentimeters);
}

int main() {
    DM dm;
    DB db;

    dm.read();
    db.read();

    DM result = add(dm, db);

    cout << "Result in meters and centimeters: ";
    result.display();

    return 0;
}