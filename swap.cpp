#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<" Enter the two numbers \n";
    cin>>a>>b;
    a = a*b;
    b = a/b;
    a = a/b;
    cout<<" the 2 numbers are after swapping "<<a<<b;
    return 0;
}