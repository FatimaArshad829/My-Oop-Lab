//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    double* balance;
//
//public:
//    // Constructor
//    BankAccount(double bal) {
//        balance = new double(bal);
//    }
//
//    // Shallow Copy Constructor
//    BankAccount(const BankAccount& other) {
//        balance = other.balance;
//    }
//
//    // Destructor
//    ~BankAccount() {
//        delete balance;
//        cout << "Destructor called, memory freed." << endl;
//    }
//
//    // Display balance
//    void showBalance() const {
//        cout << "Balance: " << *balance << endl;
//    }
//
//    // Modify balance
//    void setBalance(double newBal) {
//        *balance = newBal;
//    }
//};
