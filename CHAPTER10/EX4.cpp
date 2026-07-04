#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
double pow(double base, int exp)
{
    double total;
    if(exp==0)
        return 1;
    else if (exp<0)
    {
        1/base;
        return exp=-exp;
    }
    else if(base==0 && exp>0)
        return  0;

    else if(base==0 && exp<0)
        return HUGE_VAL;

    else
        for (int i=1; i<=exp; i++)
        {
            total*=base;
        }
    return total;
}
int main()
{
    double bnum, exnum;
    cout<< "Enter base number \n";
    cin>>bnum;
    cout<< "Enter exponent number \n";
    cin>>exnum;
    cout<<pow(bnum,exnum)<<endl;



    return 0;

}
