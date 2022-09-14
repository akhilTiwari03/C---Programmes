#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int count=1;
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)   
            cout<<count<<" ";
            else if(j==2 || j==i-1)
            cout<<(i+j-1)-j<<" ";
            else
            cout<<i+j-2<<" ";
    
        }
        cout<<endl;
    }
}