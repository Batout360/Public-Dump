//To Find the Avrage ,Maximum and Minimum
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    double num, sum = 0, maxVal, minVal;
    cout << "Enter " << n << " numbers:\n";
    cin >> num;
    sum = maxVal = minVal = num;

    for (int i = 1; i < n; ++i) {
        cin >> num;
        sum += num;
        if (num > maxVal) maxVal = num;
        if (num < minVal) minVal = num;
    }

    cout << "Average: " << sum / n << endl;
    cout << "Maximum: " << maxVal << endl;
    cout << "Minimum: " << minVal << endl;

    return 0;
}
