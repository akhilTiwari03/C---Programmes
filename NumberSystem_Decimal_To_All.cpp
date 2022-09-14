#include<bits/stdc++.h>
using namespace std;
int decimaltobinary(int n)
{
    int ans =0;
    int x=1;
    while(x<=n)
    x *=2;
    x/=2;
    
    while(x>0)
    {
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=2;
        ans = ans*10 + lastdigit;
    }
    return ans;
}
int decimaltooctal(int n)
{
    int ans =0;
    int x=1;
    while(x<=n)
    x *=8;
    x /=8;
    
    while(x>0)
    {
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=8;
        ans = ans*10 + lastdigit;
    }
    return ans;
}
string decimaltohexadecimal(int n)
{
    string ans = "";
    int x = 1;
    while(x<=n)
    x*=16;
    x/=16;
    while(x>0)
    {
        int lastdigit = n/x;
        n -=x*lastdigit;
        x/=16;
        if(lastdigit<=9)
        {
            ans = ans + to_string(lastdigit); // to_string is used to append/pass any integer  to an string 
        }
        else
        {
            char c = 'A' + lastdigit - 10; // as 'A' +1 is equal to B so it will work.
            ans.push_back(c);//it will pushback c to answer 
        }
    }
    return ans;
}
int main()
{
    int x,y,z;
    cin>>x;
    cout<<"Decimal to Binary is :"<<decimaltobinary(x)<<endl;
    cin>>y;
    cout<<"Decimal to Octal is :"<<decimaltooctal(y)<<endl;
    cin>>z;
    cout<<"Decimal toHexaDecimal is :"<<decimaltohexadecimal(z)<<endl;
    return 0;
}