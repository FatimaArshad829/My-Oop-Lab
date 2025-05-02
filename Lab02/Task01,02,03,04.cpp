//#include<iostream>
//using namespace std;
//class Employee{
//	int id;
//	string name;
//	float salary;
//	public:
//	Employee()
//	{
//		name="Not Assigned";
//		salary=0.0;
//		id=0;
//	}
//	void displayDetails()
//	{
//		cout<<"Name:"<<name<<endl;
//		cout<<"Id:"<<id<<endl;
//		cout<<"Salary:"<<salary<<endl;
//	}
//};
//int main()
//{
//	Employee e1;
//	e1.displayDetails();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class BankAccount{
//	string accountNumber;
//	string accountHolder;
//	double balance;
//	public:
//	BankAccount(string an,string ah,double b)
//	{
//		accountNumber=an;
//		accountHolder=ah;
//		balance=b;
//	}
//	void showAccountDetails()
//	{
//		cout<<"AccountNumber:"<<accountNumber<<endl;
//		cout<<"AccountHolder:"<<accountHolder<<endl;
//		cout<<"Balance:"<<balance<<endl;
//	}
//};
//int main()
//{
//	BankAccount b("Pk0309800780100","Muhammad Awais",10000);
//	b.showAccountDetails();
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class Rectangle{
//	float length;
//	float width;
//	public:
//	Rectangle()
//	{
//		length=1.0;
//		width=1.0;
//	}
//	Rectangle(float l,float w)
//	{
//		length=l;
//		width=w;
//	}
//	Rectangle(float side)
//	{
//		length=side;
//		width=side;
//	}
//	float area(){
//		return length*width;
//	}
//	void display()
//	{
//		cout<<"Length:"<<length<<",Width:"<<width<<endl;
//	}
//};
//int main()
//{
//	Rectangle r1;
//	r1.display();
//	cout<<"Area:"<<r1.area()<<endl;
//	Rectangle r2(5.5,4.5);
//	r2.display();
//	cout<<"Area:"<<r2.area()<<endl;
//	Rectangle r3(4.0);
//	r3.display();
//	cout<<"Area:"<<r3.area()<<endl;
//	return 0;
//}



#include<iostream>
using namespace std;
class Locker
{
	public:
	Locker(){
		cout<<"Locker allocated to customer."<<endl;
	}
	~Locker()
	{
		cout<<"Locker returned by customer."<<endl;
	}
};
int main()
{
	{
	Locker lock01;
    }
    cout<<"--------"<<endl;
	Locker* lock02 = new Locker();
	delete lock02;
	return 0;
}
