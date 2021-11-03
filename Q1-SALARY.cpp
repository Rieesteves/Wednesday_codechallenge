#include<iostream>
using namespace std;
  
class Employee
{
    private :
       
        int salary;
        
          
    public :
    
  void getsalary()
{

cout << "Enter your salary : "; cin >> salary;
}

void printsalary()
 
{
cout << "Your Salary is :  " << salary;
}
};

  
// main function
int main()
{
     Employee salar;
    salar.getsalary();
    
    salar.printsalary();
    return 0;
}