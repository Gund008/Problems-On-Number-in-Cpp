#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

//Class declaration
class Airthematic
{
    public:
    int iNo;
    Airthematic(int);
    bool DivisibleByThreeAndFive();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

bool Airthematic::DivisibleByThreeAndFive()
{
    if((iNo % 5==0) && (iNo % 3==0))
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
    bool iRet=FALSE;

    cout<<"Enter the Number:\n";
    cin>>iValue;          

    Airthematic obj(iValue);

    iRet=obj.DivisibleByThreeAndFive();
    
    if(iRet==TRUE)
    {
       cout<<"Number is Divisible by Three and Five:\n";
    }
    else
    {
        cout<<"Number is not  Divisible by Three and Five:\n";
    }
    return 0;

}