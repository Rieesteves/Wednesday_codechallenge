#include <iostream> 
using namespace std; int sum(int, int);
float sum(float, float); float sum(int, float); int main(){
int n1, n2, x;
 
float n3, n4, y;
cout<<"Enter two integer numbers: ";
 cin>>n1>>n2;
cout<<"Result: "<<sum(n1, n2)<< endl; 
cout<<"Enter two float numbers: "; 
cin>>n3>>n4;
cout<<"Result: " <<sum(n3, n4)<< endl;
 cout<<"Enter one integer and one float number: ";
cin>>x>>y;
cout<<"Result: " <<sum(x, y)<< endl; 
int first[20], second[20], sum[20], c, n;
cout << "Enter the number of elements in the array "; 
cin >> n;
cout << "Enter elements in first array" << endl;
for (c = 0; c < n; c++) cin >> first[c];
cout << "Enter elements in second array" << endl; 
for (c = 0; c < n; c++)
cin >> second[c];
cout << "Sum of elements of the arrays->" << endl;
 for (c = 0; c < n; c++) {
 	
sum[c] = first[c] + second[c]; cout << sum[c] << endl;
}
return 0;


}
int sum(int a, int b){ return a+b;
}
float sum(float a, float b){
 
return a+b;
}


float sum(int a, float b){ return a+b;
}
