#include<iostream>
using namespace std;

int main()
{
    int n,rev=0,temp;
    cin>>n;
    while(n!=0)
    {
        temp = n%10;
        rev = rev*10 + temp;
        n= n/10;
    }
    cout<<"The reverse  of a number is : "<<rev<<endl;

}