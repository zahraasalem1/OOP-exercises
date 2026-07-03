#include <iostream>
#include <iomanip>
using namespace std;
long double fac1(unsigned int n){
long double total=1;
  for(int i=1; i<=n; n--){
    total*=n;
  }
    return total;
}

long double fac2(unsigned int n){
    if (n==0)
    return 1;
 return n*fac2(n-1);
  }
int main(){

cout<< "**For loop**"<<endl;
cout<<left<<setw(30)<<"NUMBER"<<"FACTORIAL"<<endl;
for (int i=1; i<=20;i++){
    cout<<left<<setw(30)<<i<<fac1(i)<<endl;

}

cout<<"---------------------------------------\n\n";
cout<< "**Recursively**"<<endl;
cout<<left<<setw(30)<<"NUMBER"<<"FACTORIAL"<<endl;
for (int i=1; i<=20;i++){
    cout<<left<<setw(30)<<i<<fac2(i)<<endl;

}

return 0;
}
