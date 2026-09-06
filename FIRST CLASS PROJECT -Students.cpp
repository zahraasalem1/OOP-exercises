#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
private:
    string name;
    int id;
    float g1,g2,g3;
    float avreage=0;
public:
    void setname(string N)
    {
        name=N;
    }
    string getname()
    {
        return name;
    }

    void setid(int ID)
    {
        id=ID;
    }

    int getid()
    {
        return id;
    }

    void setgrades(float G1,float G2,float G3)
    {
        g1=G1;
        g2=G2;
        g3=G3;
    }

    float getgrades()
    {
        return g1,g2,g3;
    }


    float averagegrad(float avr)
    {
        avr=(g1+g2+g3)/3;
        avreage=avr;
        return avreage;
    }

    void stustatus()
    {
        if (avreage>50)
            cout<<left<<setw(35)<<"Status:"<<"Pass \n";

        else
            cout<<left<<setw(35)<<"Status:"<<"Failed \n";
    }

    float topgrate()
    {
        if (g1>g2 && g1>g3)
            return g1;
        if (g2>g1 && g2>g3)
            return g2;
        else
            return g3;
    }

    void stuinfo()
    {
        cout<<left<<setw(35)<<"Student's name is: "<<name<<endl;
        cout<<left<<setw(35)<<"Student's ID is: "<<id<<endl;
        cout<<left<<setw(35)<<"Student's average grad: "<<averagegrad(avreage)<<endl;
        stustatus();
        cout<<left<<setw(35)<<"The highest grade is: "<<topgrate();


    }
};

int main ()
{

    Student st1;
    st1.setname("Zahraa Salem");
    st1.setid(98765);
    st1.setgrades(80,79,99.40);
    st1.stuinfo();

    return 0;
}
