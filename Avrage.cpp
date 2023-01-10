#include<iostream>
using namespace std;

float Addtion(float iValue1,float iValue2)
{
    float iAns=0;
    iAns=iValue1 + iValue2;
    return iAns /2;
}

int main()
{
    float iNo1=0,iNo2=0;
    float iRet=0;

    cout<<"Please Enter the First Number:"<<endl;
    cin>>iNo1;

    cout<<"Please Enter Second Number the Number:"<<endl;
    cin>>iNo2;

    iRet=Addtion(iNo1,iNo2);
    cout<<"Avrage is:"<<iRet;
    
    return 0;

}
