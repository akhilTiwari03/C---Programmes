#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int x = 1;
    int ans = 0;
    while(x <= n)
    {
        x *=2;
    }
    x /= 2;
    while(x > 0)
    {
        int ls = n / x;
        ans = ans*10 + ls;
        n = n - ls*x;
        x /= 2;
    }
    cout << ans << endl;
}