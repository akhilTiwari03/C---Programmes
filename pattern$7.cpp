#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) // palindromic triangle
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int count =i;
        for(;j<=n;j++)
        { 
            cout<<count<<" ";
            count--;
        }
        int count1=2;
        for(;j<=n+i-1;j++)
        {
            cout<<count1<<" ";
            count1++;
        }
        cout<<endl;
    }
}