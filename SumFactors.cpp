#include<iostream>
using namespace std;

//Class declaration
class Airthematic
{
    public:
    int iNo;
    Airthematic(int);
    int SumFactors();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

int Airthematic::SumFactors()
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
       if(iNo % iCnt==0)
       {
         iSum=iSum+iCnt;
       }  
    }
    return iSum;
}
///////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;
    
    cout<<"Enter the Number:\n";
    cin>>iValue;          

    Airthematic obj(iValue);

    iRet=obj.SumFactors();
    cout<<" Factor Sum :"<<iRet<<"\n";

    return 0;

}