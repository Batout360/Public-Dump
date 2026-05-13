// Bank Account but up to 10 customers
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
        cout << "Name: " << name << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    const int MAX_CUSTOMERS = 10;
    BankAccount accounts[MAX_CUSTOMERS];
    int numCustomers;

    cout << "Enter number of customers (up to 10): ";
    cin >> numCustomers;
    if (numCustomers > MAX_CUSTOMERS) numCustomers = MAX_CUSTOMERS;

    for (int i = 0; i < numCustomers; ++i) {
        string name, type;
        int accNo, choice;
        double bal, dep, wd;

        cout << "\nCustomer " << (i + 1) << ":\n";
        cout << "Enter name: ";
        getline(cin >> ws, name);
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

        accounts[i].assignInitialValues(name, accNo, type, bal);

        cout << "Enter amount to deposit: ";
        cin >> dep;
        accounts[i].deposit(dep);

        cout << "Enter amount to withdraw: ";
        cin >> wd;
        accounts[i].withdraw(wd);
    }

    cout << "\n--- Account Details ---\n";
    for (int i = 0; i < numCustomers; ++i) {
        cout << "\nCustomer " << (i + 1) << ":\n";
        accounts[i].display();
    }

    return 0;
}
