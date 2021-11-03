#include <iostream> 
#include<string.h>

using namespace std;
 
class Student {
 private:
int rnum; char n[10]; int marks; public:
static int objectCount;
 Student() {
objectCount++;

}


void getdata() {
cout << "Enter roll number: "<<endl; cin >> rnum;
cout << "Enter name: "<<endl; cin >> n;
}


void display() {
cout<<"Roll Number = "<< rnum <<endl; 
cout<<"Name = "<< n <<endl; cout<<endl;
}
};
int Student::objectCount = 0; 
int main(void) {
Student s1; s1.getdata();
s1.display();
 Student s2; 
 s2.getdata();
 
s2.display();
 Student s3; 
 s3.getdata();
s3.display();
 Student s4;
  s4.getdata();
s4.display();
 Student s5; 
 s5.getdata();
s5.display();
cout << "Total objects created = " << Student::objectCount << endl; return 0;
}
