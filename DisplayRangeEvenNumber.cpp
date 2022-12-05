//Write a Program which accept range from user and display all even numbers in between that range.
//Input :23 35
//Output: 24 26 28 30 32 34

//Input :10 18
//Output :10 12 14 16 18

//Input :10 10
//Output:10

//Input : -10 2
//Output :-10 -8 -6 -4 -2 0 2

//Input: -90 18
//Output: Invalid range

////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//Class Declaration
class Range
{
    public:
    int iStart;
    int iEnd;

    Range(int,int);
    void DisplayRangeEvenNumbers();
};

//Class Defination
Range::Range(int A,int B)
{
    iStart=A;
    iEnd=B;
}

void Range::DisplayRangeEvenNumbers()
{
    int iCnt=0;

    if(iStart<0)  //Filter  
    {
       iStart=-iStart;
    }

    if(iStart<iEnd)
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            if((iCnt % 2)==0)
            {
              cout<<iCnt;
            }
            cout<<"\t"; 
        }
    }
    else if(iStart>iEnd)
    {
        cout<<"Invalid Range:\n";
    }
    else if(iStart==iEnd)
    {
        cout<<iStart;
    }
}
////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1,iValue2=0;

    cout<<"Enter the First Value:\n";
    cin>>iValue1;

    cout<<"Enter the Second  Value:\n";
    cin>>iValue2;

    Range obj(iValue1,iValue2);

    obj.DisplayRangeEvenNumbers();

    return 0;

}