// Bank Account 
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string name;
    int accountNumber;
    string accountType;
    double balance;
public:
    void assignInitialValues(string n, int accNo, string accType, double bal) {
        name = n;
        accountNumber = accNo;
        accountType = accType;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    void display() {
        cout << "\n";
        cout << "Account Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    string name, type;
    int accNo, choice;
    double bal, dep, wd;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Select account type (1. Savings  2. Current): ";
    cin >> choice;
    if (choice == 1)
        type = "Savings";
    else if (choice == 2)
        type = "Current";
    else {
        cout << "Invalid choice. Defaulting to Savings." << endl;
        type = "Savings";
    }
    cout << "Enter initial balance: ";
    cin >> bal;

    acc.assignInitialValues(name, accNo, type, bal);

    cout << "Enter amount to deposit: ";
    cin >> dep;
    acc.deposit(dep);

    cout << "Enter amount to withdraw: ";
    cin >> wd;
    acc.withdraw(wd);

    acc.display();

    return 0;
}
