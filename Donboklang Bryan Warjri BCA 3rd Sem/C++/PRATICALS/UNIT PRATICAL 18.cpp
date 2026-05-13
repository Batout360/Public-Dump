// Polar class with operator overloading for +
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793; //value of PI

class Polar {

    double radius;
    double angle; // in radians

public:
    // Constructor
    Polar(double r = 0, double a = 0) : radius(r), angle(a) {}

   
    double getRadius() const { return radius; }
    double getAngle() const { return angle; }

    // Overload + operator
    Polar operator+(const Polar& other) const {
        // Convert both polar coordinates to rectangular coordinates
        double x1 = radius * cos(angle);
        double y1 = radius * sin(angle);

        double x2 = other.radius * cos(other.angle);
        double y2 = other.radius * sin(other.angle);

        // Add the rectangular coordinates
        double x = x1 + x2;
        double y = y1 + y2;

        // Convert the result back to polar coordinates
        double newRadius = sqrt(x * x + y * y);
        double newAngle = atan2(y, x); // atan2 handles the quadrant 

        return Polar(newRadius, newAngle);
    }

    // Display method
    void display() const {
        cout << "Radius: " << radius << ", Angle: " << angle << " radians" << endl;
    }
};

int main() {
    Polar p1(5, PI / 4); // Radius = 5, Angle = 45 degrees 
    Polar p2(3, PI / 6); // Radius = 3, Angle = 30 degrees 

    Polar p3 = p1 + p2;

    cout << "P1: ";
    p1.display();
    cout << "P2: ";
    p2.display();
    cout << "P1 + P2: ";
    p3.display();

    return 0;
}