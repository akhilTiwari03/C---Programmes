#include<iostream>
using namespace std;
int main()
{
    int a,i,m=0,rev=0,flag=0 ;
    cout<<" Enter the number you want to check";
    cin>> a;
    for(i=0;i<=a;)
    m = a%2;
    rev=rev*10+m;
    a=a/2; 
    return 0;
}