#include<iostream>
using namespace std;

class Numbers
{
    public:
    int iNo;
    
    Numbers(int i)
    {
       iNo=i;
    }

    int Factorial()
    {
        int iCnt=0;
        int iFact=1;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iFact=iFact * iCnt;
        }
        return iFact;
    }
};

int main()
{
    int iValue=0;
    int iRet=0;
    cout<<"Please Enter the  number:"<<endl;
    cin>>iValue;

    Numbers noj(iValue);
    iRet=noj.Factorial();
    cout<<"Factorial is:"<<iRet;

    return 0;

}