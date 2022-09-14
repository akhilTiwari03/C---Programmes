#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int orig = n;
    int dup=0,temp;
    while(n!=0)
    {
        temp = n%10;
        dup = dup + pow(temp,3);
        n=n/10;
    }
    if(orig==dup)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    cout<<" Non - Armstrong Number"<<endl;

}