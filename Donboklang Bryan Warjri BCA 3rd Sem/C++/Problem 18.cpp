//Class and objects for Student
#include <iostream>
#include <string>

using namespace std;

class student {
    int b[5], c[5], d[5], e[5], total[5];
    string name[5];
    int count;
public:
    void Student(int a) {
        count = a;
        for (int i = 0; i < a; i++) {
            cout << "Enter the information for student N.o " << (i + 1) << endl;
            cout << "Name:";
            getline(cin >> ws, name[i]);
            cout << "Roll n.o:";
            cin >> b[i];
            cout << "Marks For the Subject \n";
            cout << "Marks ComputerSC:";
            cin >> c[i];
            cout << "Marks English:";
            cin >> d[i];
            cout << "Marks Maths:";
            cin >> e[i];
            total[i] = (c[i] + d[i] + e[i]) / 3;
        }
    }
    void Display();
};

void student::Display() {
    cout << "\t\tINFORMATION\n";
    for (int i = 0; i < count; i++) {
        cout << "------------------------------------\n";
        cout << "Student N.o " << (i + 1) << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Roll n.o: " << b[i] << endl;
        cout << "------------------------------------\n";
        cout << "Computer Sc: " << c[i] << endl;
        cout << "English: " << d[i] << endl;
        cout << "Maths: " << e[i] << endl;
        cout << "Average: " << total[i] << endl;
        if (total[i] >= 60 && total[i] <= 100) {
            cout << "Secured 1st Division" << endl;
        }
        else if (total[i] >= 40 && total[i] < 60) {
            cout << "Secured 2nd Division" << endl;
        }
        else if (total[i] >= 30 && total[i] < 40) {
            cout << "Secured 3rd Division" << endl;
        }
        else {
            cout << "Failed" << endl;
        }
    }
}

int main() {
    int a;
    student s;
    cout << "How many students are you going to Grade [Max 5]:";
    cin >> a;
    if (a > 5 || a <= 0) {
        cout << "Invalid input \nRestarting Program\n";
        return 0;
    }
    s.Student(a);
    s.Display();
    return 0;
}
