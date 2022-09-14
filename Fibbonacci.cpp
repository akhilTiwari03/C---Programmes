#include<iostream>
using namespace std;
void fibb(int n)
{
    int t1=0;
    int t2=1;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        int next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fibb(n);
    return 0;
}