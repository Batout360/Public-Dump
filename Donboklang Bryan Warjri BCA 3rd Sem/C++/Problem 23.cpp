#include<iostream>
using namespace std;

class complex1 {
    int real, imag;

public:
    complex1() {
        real = 0;
        imag = 0;
    }

    complex1(int x, int y) {
        real = x;
        imag = y;
    }

    void disp() {
        cout << "\nreal value = " << real << endl;
        cout << "imag value = " << imag << endl;
    }

   
    friend complex1 operator+(complex1 c1, complex1 c2);
};


complex1 operator+(complex1 c1, complex1 c2) {
    complex1 tmp;
    tmp.real = c1.real + c2.real;
    tmp.imag = c1.imag + c2.imag;
    return tmp;
}

int main() {
    complex1 c1(4, 6), c2(7, 9);
    complex1 c3;

    c3 = c1 + c2;  
    c3.disp();     

    return 0;
}