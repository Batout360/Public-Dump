//Results fees using a inhertance class
#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    string name[5];
    int roll[5];
    int count;

public:
    Student() {
        count = 0;
    }

    void inputStudentInfo(int a) {
        count = a;
        for (int i = 0; i < count; i++) {
            cout << "\nEnter the information for student No. " << (i + 1) << endl;
            cout << "Name: ";
            getline(cin >> ws, name[i]);
            cout << "Roll No.: ";
            cin >> roll[i];
        }
    }

    int getCount() {
        return count;
    }

    string getName(int i) {
        return name[i];
    }

    int getRoll(int i) {
        return roll[i];
    }
};

class StudentFees : public Student {
protected:
    int fees[5];

public:
    void inputFees() {
        for (int i = 0; i < count; i++) {
            cout<<"\nFull fees is 6000";
            cout << "\nEnter fees for student No. " << (i + 1) << " (" << name[i] << "): ";
            cin >> fees[i];
        }
    }

    int getFees(int i) {
        return fees[i];
    }

    void displayStudentInfo(int i) {
        cout << "Name: " << name[i] << endl;
        cout << "Roll No.: " << roll[i] << endl;
        cout << "Fees: " << fees[i] << endl;
        if (fees[i]==6000)
        {
            cout<<"Fees has been payed in full\n";
        }
        else if (fees[i]<6000||fees[i]>0)
        {
            cout<<"Fees not fully paid\n";
        }
        
        else
        {
            cout<<"ERROR";
        }
        
    }
};

class StudentResult : public StudentFees {
    int comp[5], eng[5], math[5], avg[5];

public:
    void inputMarks() {
        for (int i = 0; i < count; i++) {
            cout << "\nEnter marks for student No. " << (i + 1) << " (" << name[i] << ")\n";
            cout << "Computer Science: ";
            cin >> comp[i];
            cout << "English: ";
            cin >> eng[i];
            cout << "Maths: ";
            cin >> math[i];
            avg[i] = (comp[i] + eng[i] + math[i]) / 3;
        }
    }

    void displayResults() {
        cout << "\n\t\tSTUDENT RESULTS\n";
        for (int i = 0; i < count; i++) {
            cout << "------------------------------------\n";
            cout << "Student No. " << (i + 1) << endl;
            cout << "-------INFORMATON AND RECIPET-------\n";
            displayStudentInfo(i);
            cout << "\n--------------RESULTS---------------\n";
            cout << "Computer Science: " << comp[i] << endl;
            cout << "English: " << eng[i] << endl;
            cout << "Maths: " << math[i] << endl;
            cout << "Average: " << avg[i] << "%" << endl;

            if (avg[i] >= 60)
                cout << "Secured 1st Division\n";
            else if (avg[i] >= 40)
                cout << "Secured 2nd Division\n";
            else if (avg[i] >= 30)
                cout << "Secured 3rd Division\n";
            else
                cout << "Failed\n";
            cout << "------------------------------------\n\n";
        }
    }
};

int main() {
    int n;
    StudentResult sr;

    cout << "How many students are you going to grade [Max 5]: ";
    cin >> n;

    if (n > 5 || n <= 0) {
        cout << "Invalid input. Restarting program.\n";
        return 0;
    }

    sr.inputStudentInfo(n);  // From Student
    sr.inputFees();          // From StudentFees
    sr.inputMarks();         // From StudentResult
    sr.displayResults();     // Final output

    return 0;
}
