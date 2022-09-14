#include<bits/stdc++.h>  // includes all necessary header files
using namespace std;
int binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n!=0)
    {
        int y = n%10;
        ans+=x*y;
        n/=10;
        x*=2;
    }
    return ans;
}
int octaltodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n!=0)
    {
        int y = n%10;
        ans+=x*y;
        n/=10;
        x*=8;
    }
    return ans;
}
int hexadecimaltodecimal(string n)
{
    int ans=0;
    int x=1;
    int size = n.size(); //predefined func. in standard  template library
    for(int i=size-1 ; i>=0 ; i-- )
    {
        if(n[i] >='0'  && n[i] <='9')
        {
            ans += x *( n[i] - '0');
        }
        else if(n[i]>='A' && n[i] <='F')
        {
            ans += x *( n[i] -'A' + 10 );
            
        }
        x *= 16;
    }
    return ans;
}
int main()
{
    int x,y;
    string z; //string is std template library function
    cin>>x;
    cout<<"\nBinary to Decimal :"<<binarytodecimal(x)<<endl;
    cin>>y;
    cout<<"Octal to  Decimal :"<<octaltodecimal(y)<<endl;
    cin>>z;
    cout<<"Hexa-Deciaml to  Decimal :"<<hexadecimaltodecimal(z)<<endl;
}