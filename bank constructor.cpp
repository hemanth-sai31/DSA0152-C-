#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
public:
    BankAccount(string name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
        cout << "Bank account for " << accountHolderName << " created." << endl;
    }
    ~BankAccount() {
        cout << "Bank account for " << accountHolderName << " closed." << endl;
    }
    void displayAccountDetails() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn. New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient funds." << endl;
        }
    }
};
int main() {
    BankAccount account1("John Doe", 123456, 1000.0);
    account1.displayAccountDetails();
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.displayAccountDetails();
    return 0;
}