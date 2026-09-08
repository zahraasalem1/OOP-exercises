#include <iostream>
#include "RECTANGLE.h"
using namespace std;

int main()
{

    float W,L;
    RECTANGLE box;
    cout<<"Enter the length\n";
    cin>>L;
    cout<<"Enter the width\n";
    cin>>W;
    box.setlength(W);
    box.setwidth(L);
    cout<<"The area of the rectangel is = "<<box.Area()<<endl;

}
