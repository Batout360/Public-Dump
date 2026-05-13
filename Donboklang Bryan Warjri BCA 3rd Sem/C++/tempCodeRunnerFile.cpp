// Matching strings with Overloading the == operator
#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *p;

public:
    String(const char *s = "") {
        p = new char[strlen(s) + 1];
        strcpy(p, s);
    }

    void show() const {
        cout << p << endl;
    }

    // Overloading the == operator
    int operator==(const String &str) const {
        return strcmp(p, str.p) == 0;
    }
};

int main() {
    String s1("Hello");
    String s2("World");
    String s3("Hello");

    cout << "String s1 = ";
    s1.show();
    cout << "String s2 = ";
    s2.show();
    cout << "String s3 = ";
    s3.show();

    // Testing the == operator
    if (s1 == s3) {
        cout << "s1 is equal to s3" << endl;
    } else {
        cout << "s1 is not equal to s3" << endl;
    }

    if (s1 == s2) {
        cout << "s1 is equal to s2" << endl;
    } else {
        cout << "s1 is not equal to s2" << endl;
    }

    return 0;
}
