#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    int sum =0;
    int i= 0;
    while(i<=n)
    {
        sum = sum + a[i];
        if(sum <0)
        {
            sum = 0;
        }
        mx = max(sum , mx); // "kadane's algorithm" And time Complexity is also good ie O(n) 
        i++;
    }
    
    cout<<"Max SubArray Sum is : "<<mx<<endl;
    return 0;
}