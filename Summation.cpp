#include<iostream>
using namespace std;

//Class declaration
class Airthematic
{
    public:
    int iNo;
    Airthematic(int);
    int Summation();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

int Airthematic:: Summation()
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iSum+iCnt;
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

    iRet=obj.Summation();
    cout<<"Addtion is :"<<iRet<<"\n";

    return 0;

}