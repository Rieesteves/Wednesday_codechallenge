// Q3.C C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Person
{
public:
	Person()
	{
	cout << "This is a Person class" << endl;
	}
};

//base class
class Account
{
	public:
	Account()
	{
		cout<<"Account of person\n";
	}
};

class Admin: public Person
{

};

class Master: public Person, public Account
{
	
};

// main function
int main()
{
	
	Master obj2;
	return 0;
}
