#include <iostream>
#include"bank.h"
#include"inheritance.h"
#include"shape.h"
#include"updated.h"
using namespace std;

int main() {
//	Task 1
//    BankAccount acc1(1000.0);
//    cout << "Original account:" << endl;
//    acc1.showBalance();
//
//    // Deep copy using custom copy constructor
//    BankAccount acc2 = acc1;
//
//    cout << "\nAfter copying to acc2:" << endl;
//    acc2.showBalance();
//
//    // Modify copied object
//    acc2.setBalance(2000.0);
//    cout << "\nAfter modifying acc2:" << endl;
//    acc1.showBalance();
//    acc2.showBalance();
    
    
    
    
    
//    Task 2
    BankAccount account1(1000.0);

    // Create a deep copy using the custom copy constructor
    BankAccount account2 = account1;

    cout << "\nBefore modifying account2:" << endl;
    cout << "account1 ";
    account1.display();
    cout << "account2 ";
    account2.display();

    // Modify the balance in account2
    account2.setBalance(2000.0);

    cout << "\nAfter modifying account2:" << endl;
    cout << "account1 ";
    account1.display();
    cout << "account2 ";
    account2.display();
    
    
    
    
    
    
//    Task 3
//	Person p;
//	p.setPerson(19, "Tayyab");
//    p.showPerson();
//    Student s;
//    s.setStudent(17, "Ali", 34);
//    s.showStudent();


//Task 4
//	Rectangle rect;

    return 0;
}

