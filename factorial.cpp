#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact *=i;
    }
    cout<<"The Factorial of a given number is :"<<fact<<endl;
    return 0;

}