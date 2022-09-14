//In this problem we will Print the pair or subarray having two elements whose sum is Equal to the number k given by the user
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n ,k;
    cin>> n >>k;
    int arr[n];
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int st =-1 , end = -1;
    int sum =0;
    int i;
    for(i =1 ; i<n ; i++)
    {
        sum =0;
        sum = arr[i-1] + arr[i];
        mx = max(mx , sum);
        if(mx == k )
    {
        st = i-1;
        end = i;
    }
    }
    cout<<arr[st] <<" "<<arr[end]<<endl; 
    return 0;
}