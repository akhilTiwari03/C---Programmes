#include<iostream>
using namespace std;
int PowerOf(int x , int n)
{
    if(n == 0)
    {
        return 1;
    }
    int ans = PowerOf(x , n-1);
    return(x*ans);
}
int main()
{
    int x , n ;
    cin >> x >> n;
    int num = PowerOf(x , n);
    cout << num ;
    return 0;
}
