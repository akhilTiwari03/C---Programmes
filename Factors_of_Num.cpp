#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<" Factors of "<<n<<" are : "<<i;
            cout<<endl;
        }

    }
    return 0;
}