#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int a[n+1]; // as we are checking for (n-1)th element then we have to declare an array till n+1 so that n th elment must always be less than n-1th.
    a[n] = -1 ; // as array is a set of all positive integers
    for(int i = 0 ; i<n ; i++)
    {
        cin >> a[i]; // time complexity is always maintained by cout not  cin.
    }
    if(n == 1)
    {
        cout<<" 1 " << endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > mx  && a[i] > a[i+1] )
        {
            ans++;
            mx = max( mx , a[i] );
        }
    }
    cout<<ans<< endl;
    return 0;
}