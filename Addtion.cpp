//write a Program which accept range from user and return addition of all numbers in between that range(Range should contains positive number only)

//Input : 23 30 
//Output :212

//Input :10 18
//Output :126

//Input : -10 2
//Output: Invalid range

//Input:90 18
//Output:Invalid range

////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

//Class Declaration
class Range
{
    public:
    int iStart;
    int iEnd;
    Range(int ,int);
    int Addition();
};

//Class Defination
Range::Range(int A,int B)
{
    iStart=A;
    iEnd=B;
} 

int Range::Addition()
{
    if(iStart<0)
    {
       iStart=-iStart;
    }

    if(iStart<iEnd)
    {
        int iCnt,iSum=0;
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            iSum=iSum + iCnt;
        }
        return iSum;
    }
    else if(iStart>iEnd)
    {
        return -1;
    } 
 }
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1,iValue2=0;
    int iRet=0;

    cout<<"Enter the First Range:"<<endl;
    cin>>iValue1;

    cout<<"Enter the Second Range:"<<endl;
    cin>>iValue2;

    Range obj(iValue1,iValue2);

    iRet=obj.Addition();

    if(iRet==-1)
    {
        cout<<"Invalid Range:"<<endl;
    }
    else
    {
        cout<<iRet<<"\t";  
    }
    return 0;

}