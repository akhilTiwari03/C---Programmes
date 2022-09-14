#include<iostream>
using namespace std;
int LastOccurance(int *a ,int n , int x)
{
    if (n == 0)
    {
        return -1;
    }
    int ans = LastOccurance(a+1 , n-1 , x);
    if(a[0] == x && ans == -1)
    {
        return 0;
    }
    if(ans == -1)
    {
        return ans;
    }
    else
        return ans + 1;
}
int main()
{
    int n ;
    cin >> n;
    int *a = new int [n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>> a[i];
    }
    int x;
    cin >> x;
    int ans = LastOccurance(a , n , x);
    cout << ans;
    delete []a;
    return 0;
}
