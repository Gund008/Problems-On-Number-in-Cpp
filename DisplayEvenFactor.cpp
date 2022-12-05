#include<iostream>
using namespace std;

//Class declaration
class Airthematic
{
    public:
    int iNo;
    Airthematic(int);
    void DisplayEvenFactor();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

void Airthematic::DisplayEvenFactor()
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=2;iCnt<=(iNo/2);iCnt=iCnt+2)
    {
        if(iNo % iCnt==0)
        {
            cout<<iCnt;
        }
        cout<<"\n";
    }
 }
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
   
    cout<<"Enter the Number:\n";
    cin>>iValue;          

    Airthematic obj(iValue);

    obj.DisplayEvenFactor();

    return 0;

}