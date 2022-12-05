#include<iostream>
using namespace std;

//Class declaration
class Airthematic
{
    public:
    int iNo;
    Airthematic(int);
    int DivisibleByFive();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

int iAirthematic::DivisibleByFive()
{
    if((iNo % 5)==0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
    
}
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;
    
    cout<<"Enter the Number:\n";
    cin>>iValue;          

    Airthematic obj(iValue);

    iRet=obj.DivisibleByFive();
    if(iRet==1)
    {
        cout<<"Divisible by five"<<"\n";
    }
    else
    {
        cout<<"not Divisible by five:\n";
    }

    return 0;

}