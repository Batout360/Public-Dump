// Modification of Vector using class - Addition of two vectors
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
            cout << "Element " << i+1 << ": ";
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

    int getSize() {
        return size;
    }
    Vector add(const Vector& v) {
        Vector result;
        if (size != v.size) {
            cout << "Vectors must be of the same size to add.\n";
            result.size = 0;
            return result;
        }
        result.size = size;
        result.data.resize(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + v.data[i];
        }
        return result;
    }
};

int main() {
    Vector v1, v2, v3;
    int n;
    cout << "Enter size of vectors: ";
    cin >> n;
    cout << "Enter elements for first vector:\n";
    v1.create(n);
    cout << "Enter elements for second vector:\n";
    v2.create(n);
    v3 = v1.add(v2);
    cout << "First vector: ";
    v1.display();
    cout << "Second vector: ";
    v2.display();
    cout << "Resultant vector after addition: ";
    v3.display();
    return 0;
}
