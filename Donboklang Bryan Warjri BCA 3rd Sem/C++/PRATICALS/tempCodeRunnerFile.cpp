#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Account {
protected:
    string name;
    int accountNumber;
    string accountType;
    double balance;
public:
    Account() {}
};

class Savings : protected Account {
public:
    void assignInitialValues(string n, int accNo, string accType, double bal) {
        name = n;
        accountNumber = accNo;
        accountType = accType;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "______________________________\n\n";
    }
};

class Current : protected Account {
public:
    void assignInitialValues(string n, int accNo, string accType, double bal) {
        name = n;
        accountNumber = accNo;
        accountType = accType;
        balance = bal;
    }

    void fine() {
        balance -= 200;
        cout << "Fine imposed for insufficient funds. New balance: " << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void CompoundInterest() {
        double r = 2.5 / 100; // 2.5% interest
        int n = 3, t = 3;
        double ci = balance * pow((1 + r / n), n * t);
        cout << "Compound Interest after " << t << " years: " << ci << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Number: " << accountNumber << endl;
        if (balance < 500) {
            fine();
        }
        cout << "Balance: " << balance << endl;
        cout << "______________________________\n\n";
    }
};

int main() {
    const int MAX_CUSTOMERS = 10;
    Savings savings[MAX_CUSTOMERS];
    Current current[MAX_CUSTOMERS];

    int numCustomers, savingsCount = 0, currentCount = 0;

    cout << "Enter number of customers (up to 10): ";
    cin >> numCustomers;
    if (numCustomers > MAX_CUSTOMERS) numCustomers = MAX_CUSTOMERS;

    for (int i = 0; i < numCustomers; i++) {
        string name, type;
        int accNo, choice;
        double bal, dep, wd;

        cout << "\nCustomer " << (i + 1) << ":\n";
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter initial balance: ";
        cin >> bal;

        cout << "Select account type (1. Savings  2. Current): ";
        cin >> choice;

        if (choice == 1) {
            type = "Savings";
            savings[savingsCount].assignInitialValues(name, accNo, type, bal);
            cout << "Enter amount to deposit: ";
            cin >> dep;
            savings[savingsCount].deposit(dep);
            cout << "Enter amount to withdraw: ";
            cin >> wd;
            savings[savingsCount].withdraw(wd);
            savingsCount++;
        } else if (choice == 2) {
            type = "Current";
            current[currentCount].assignInitialValues(name, accNo, type, bal);
            cout << "Enter amount to deposit: ";
            cin >> dep;
            current[currentCount].deposit(dep);
            cout << "Enter amount to withdraw: ";
            cin >> wd;
            current[currentCount].withdraw(wd);
            currentCount++;
        } else {
            cout << "Invalid choice. Defaulting to Savings." << endl;
            type = "Savings";
            savings[savingsCount].assignInitialValues(name, accNo, type, bal);
            cout << "Enter amount to deposit: ";
            cin >> dep;
            savings[savingsCount].deposit(dep);
            cout << "Enter amount to withdraw: ";
            cin >> wd;
            savings[savingsCount].withdraw(wd);
            savingsCount++;
        }
    }

    if (savingsCount == 0) {
        cout << "\nThere are no Savings Accounts present.\n";
    } else {
        cout << "\n--- Account Details ---\n";
        cout << "\n------- Savings -------\n";
        for (int i = 0; i < savingsCount; i++) {
            cout << "\nCustomer " << (i + 1) << ":\n";
            savings[i].display();
        }
    }

    if (currentCount == 0) {
        cout << "\nThere are no Current Accounts present.\n";
    } else {
        cout << "\n--- Account Details ---\n";
        cout << "\n------- Current -------\n";
        for (int i = 0; i < currentCount; i++) {
            cout << "\nCustomer " << (i + 1) << ":\n";
            current[i].display();
        }
    }

    return 0;
}
