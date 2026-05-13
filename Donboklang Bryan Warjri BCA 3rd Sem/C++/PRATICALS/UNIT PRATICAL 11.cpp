//Modification of Vector using class
#include <iostream>
#include <vector>
using namespace std;

class Vector {
    vector<float> data;
    int size;
public:
    void create(int n) {
        size = n;
        data.resize(size);
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Element " << i << ": ";
            cin >> data[i];
        }
    }

    void modify(int index, float value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        } else {
            cout << "Invalid index.\n";
        }
    }

    void multiply(float scalar) {
        for (int i = 0; i < size; i++) {
            data[i] *= scalar;
        }
    }

    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << data[i];
            if (i != size - 1) cout << ", ";
        }
        cout << ")\n";
    }
};

int main() {
    Vector v;
    int n, idx;
    float val, scalar;

    cout << "Enter size of vector: ";
    cin >> n;
    v.create(n);

    cout << "Enter index to modify:";
    cin >> idx;
    cout << "Enter new value:";
    cin >> val;
    v.modify(idx, val);
    cout << "Enter scalar to multiply: ";
    cin >> scalar;
    v.multiply(scalar);
    cout << "The vector is: ";
    v.display();
    return 0;
}
