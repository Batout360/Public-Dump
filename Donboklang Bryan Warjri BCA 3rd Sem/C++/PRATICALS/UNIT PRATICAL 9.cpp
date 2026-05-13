//investment Equation
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double P, r;
    int n;
    cout << "Enter principal amount: ";
    cin >> P;
    cout << "Enter interest rate (e.g., 0.10 for 10%): ";
    cin >> r;
    cout << "Enter number of years: ";
    cin >> n;
    cout << "Year\tPrincipal\tFuture Value\tRate\n";
    for (int year = 1; year <= n; year++) {
        double V = P * (1 + r);
        cout << year << "\t" << fixed << setprecision(2) << P << "\t\t" << V << "\t\t" << r * 100 << "%\n";
        P = V;
    }

    return 0;
}
