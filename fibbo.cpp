#include<iostream>
using namespace std;
class fibbo
{
    int n;
    public:
    int readdata()
    {
        cout<<"Enter the number of terms"<<endl;
        cin>>n;
        return n;
    }
    int fibb(int n)
    {
            if(n==-1)
            return -1 ;    
            if (n==1)
            {
            return (n);
            }
            return (fibb(n-2)+fibb(n-1));
    }
    void putdata(int a)
    {

        if(a==-1)
        {
            cout<<"Wrong number";
        }
        else
         cout<<"The Fibbonacci Series of the number is:";
             cout<<a;
         
    }
}s;
int main()
{
    int a,i;
    a = s.fibb(s.readdata());
    
    s.putdata(a);

}