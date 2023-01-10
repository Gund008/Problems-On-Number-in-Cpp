#include<iostream>
using namespace std;

void Swap(int *x,int *y)
{
    int iTemp;
    iTemp=*x;
    *x=*y;
    *y=iTemp;
}

int main()
{
    int a=11,b=10;

    cout<<"Value of a"<<a<<"\n";
    cout<<"Value of b"<<b<<"\n";

    Swap(&a,&b);

    cout<<"Value of a"<<a<<"\n";
    cout<<"Value of b"<<b<<"\n";
   
    return 0;

}
   