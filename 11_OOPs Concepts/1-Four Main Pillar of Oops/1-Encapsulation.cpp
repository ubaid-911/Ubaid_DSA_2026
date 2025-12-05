#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;  // Data is hidden

public:
    // Setter - to deposit money
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    // Setter - to withdraw money
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Getter - to check balance
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(500);       // Deposit money
    acc.withdraw(200);      // Withdraw money
    cout << "Final Balance: " << acc.getBalance() << endl;
    return 0;
}
