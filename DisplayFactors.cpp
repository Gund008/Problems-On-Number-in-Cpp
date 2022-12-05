#include<iostream>
using namespace std;

//Class declaration
class Airthematic
{
    public:
    int iNo;
    Airthematic(int);
    void DisplayFactors();
};

//Class Defination
Airthematic::Airthematic(int A)
{
    iNo=A;
}

void Airthematic::DisplayFactors()
{
   int iCnt=0;
   cout<<"Factor are:\n";

   for(iCnt=1;iCnt<iNo;iCnt++)  //O(N)
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

    obj.DisplayFactors();

    return 0;

}