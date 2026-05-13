//invoking type casting operator to take meters and centimeters to feet and inches
#include <iostream>
using namespace std;

class FeetAndInches {
	int feet, inches;

public:
	FeetAndInches() : feet(0), inches(0) {}

	FeetAndInches(int meters, int centimeters) {
		// Conversion factors
		double totalInches = (meters * 100 + centimeters) * 0.393701;
		feet = totalInches / 12; // Convert inches to feet
		inches = totalInches - (feet * 12); // Remaining inches
		inches = static_cast<int>(totalInches) % 12; // Remaining inches
	}

	void show() {
		cout << feet << " feet " << inches << " inches";
	}
};

class MetersAndCentimeters {
	int meters, centimeters;

public:
	MetersAndCentimeters(int m, int cm) : meters(m), centimeters(cm) {}

	// Type casting operator
	operator FeetAndInches() {
		return FeetAndInches(meters, centimeters);
	}

	void show() {
		cout << meters << " meters " << centimeters << " centimeters";
	}
};

int main() {

	
	MetersAndCentimeters ob_a(2, 4); // 2 meters and 4 centimeters
	FeetAndInches ob_b;

	ob_b = ob_a; // Invokes the casting operator function

	cout << "\nMeters and Centimeters: ";
	ob_a.show();

	cout << "\nFeet and Inches: ";
	ob_b.show();

	return 0;
}
