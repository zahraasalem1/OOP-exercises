#include <iostream>
#include <iomanip>
#include "tool1.h"
#include "tool2.h"
using namespace std;
int main(){
double num1,num2;
cout<<"Enter the first number\n";
cin>>num1;
cout<<"Enter the secound number\n";
cin>>num2;
cout<<left<<setw(10)<<"Sum = "<<TOOL1::calculate(num1,num2)<<endl;
cout<<left<<setw(10)<<"Product = "<<TOOL2::calculate(num1,num2)<<endl;

return 0;
}
