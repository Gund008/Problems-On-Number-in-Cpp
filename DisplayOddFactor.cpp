#include<iostream>
using namespace std;

//Class declaration
class Airthematic
{
    public:
    int iNo;
    Airthematic(int);
    void DisplayOddFactor();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

void Airthematic::DisplayOddFactor()
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=1;iCnt<=(iNo/2);iCnt=iCnt+2)
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

    obj.DisplayOddFactor();
  

    return 0;

}