#include<bits/stdc++.h>
using namespace std;
int kadane_algo(int a[] , int n)
{
    int sum =0;
    int mx = INT_MIN;
    for(int i = 0 ; i<n ; i++)
    {
        sum +=a[i];
        if(sum<0)
        {
            sum = 0;
        }
        mx = max(mx,sum);
    }
    return mx;
}
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i=0 ;i<n ; i++)
    {
        cin>> a[i];
    }
    int nonwrapSum; // it means when the 1st element cannot be added into last so that a circle should not be formed
    int wrapSum; // whereas wrapSum meanas when a circle can be formed when after last element 1st can be added if it gives max value and after 1 array can still continue to n-1 th element;
    nonwrapSum =  kadane_algo(a,n);
    int totalSum =0; //sum of all array elements
    for(int i=0 ; i<n ; i++)
    {
        totalSum += a[i];
        a[i] = -a[i]; // for reverting the sign of array so tht we can come across the non contributing elementand we can sub from totalarray sum and we get the max subarray sum
    }
    wrapSum = totalSum -(-kadane_algo(a , n)); //this will subtract the non contributing element
    cout<<max(wrapSum , nonwrapSum)<<endl;
    return 0;
}