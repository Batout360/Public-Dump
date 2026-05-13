//Simple C++ program to demonstrate the use of vector
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {10, 20, 30};
    for (int num : numbers)
        cout << num << " ";
    cout << endl;
    return 0;
}

