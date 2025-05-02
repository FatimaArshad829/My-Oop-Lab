#include <iostream>
using namespace std;

class BankAccount {
private:
    double* balance;  // Pointer to dynamically allocate memory for balance

public:
    // Constructor: Dynamically allocates memory for the balance
    BankAccount(double amount) {
        balance = new double(amount);
        cout << "BankAccount created with balance: " << *balance << endl;
    }

    // Deep Copy Constructor: Allocates new memory for copied object
    BankAccount(const BankAccount& other) {
        balance = new double(*other.balance);  // Creates a new copy
        cout << "Deep copy constructor called!" << endl;
    }

    // Function to update the balance
    void setBalance(double new_balance) {
        *balance = new_balance;
    }

    // Function to display the balance
    void display() const {
        cout << "Balance: " << *balance << endl;
    }

    // Destructor: Properly deallocates memory
    ~BankAccount() {
        cout << "Deleting balance: " << *balance << endl;
        delete balance;
    }
};



