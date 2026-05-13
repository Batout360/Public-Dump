// FLOAT class with operator overloading for +, -, *, /
#include <iostream>
using namespace std;

class FLOAT {
private:
    float value;

public:
    // Constructor
    FLOAT(float val = 0.0f) : value(val) {}

    // Overload + operator
    FLOAT operator+(const FLOAT& other) const {
        return FLOAT(value + other.value);
    }

    // Overload - operator
    FLOAT operator-(const FLOAT& other) const {
        return FLOAT(value - other.value);
    }

    // Overload * operator
    FLOAT operator*(const FLOAT& other) const {
        return FLOAT(value * other.value);
    }

    // Overload / operator
    FLOAT operator/(const FLOAT& other) const {
        if (other.value == 0.0f) {
            cout << "Error: Division by zero" << endl;
            return FLOAT(0.0f); // Return a default value
        }
        return FLOAT(value / other.value);
    }

    // Getter for value
    float getValue() const {
        return value;
    }
};

int main() {
    FLOAT a(10.5f), b(2.5f), c(0.0f);

    FLOAT sum = a + b;
    FLOAT diff = a - b;
    FLOAT prod = a * b;

    FLOAT quot1 = a / b;
    FLOAT quot2 = a / c; // Division by zero case

    cout << "Sum: " << sum.getValue() << endl;
    cout << "Difference: " << diff.getValue() << endl;
    cout << "Product: " << prod.getValue() << endl;
    cout << "Quotient (a / b): " << quot1.getValue() << endl;
    cout << "Quotient (a / c): " << quot2.getValue() << endl;

    return 0;
}