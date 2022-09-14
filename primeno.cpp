#include<iostream>
using namespace std;
int main()
{
    int a,i,m=0,flag=0 ;
    cout<<" Enter the number you want to check";
    cin>> a;
    m = a/2;
    for(i=0;i<=m;i++)
    {
        if(a%i==0) 
        {
            cout<<"Number is not Prime."<<endl;
            flag =1;
            break;
        }
    }
    if (flag==0)
    cout<<"Number is Prime."<<endl;
    return 0;
}