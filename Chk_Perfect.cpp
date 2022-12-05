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
    bool CheckPerfect();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

bool Airthematic::CheckPerfect()
{
    int iSum=0;
    int iCnt=0;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
       if((iNo % iSum)==0)
       {
         iSum=iSum+iCnt;
       }
    }
    if(iSum==iNo)
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
    bool iRet=0;

    cout<<"Enter the Number:\n";
    cin>>iValue;          

    Airthematic obj(iValue);

    iRet=obj.CheckPerfect();
 
    if(iRet==1)
    {
        cout<<"Number is Perfect"<<endl;
    }
    else
    {
        cout<<"Number is not perfect"<<endl;
    }
    return 0;

}