#include "RECTANGLE.h"
#include <iostream>
using namespace std;

RECTANGLE::RECTANGLE()
{

}

RECTANGLE::~RECTANGLE()
{

}



void RECTANGLE::setlength(float l)
{
    if(l>0)
        length=l;
    else
        cout<<"error\n";
}

float RECTANGLE::getlength()
{
    return length;
}


void RECTANGLE::setwidth(float w)
{
    if(w>0)
        width=w;
    else
        cout<<"error\n";
}

float RECTANGLE::getwidth()
{
    return width;
}


float RECTANGLE::Area()
{

    return length*width;
}
