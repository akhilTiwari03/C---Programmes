#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>> a[i];
    }
    int mx = INT_MIN;
  /*  for(int i=0 ; i<n ; i++)
    {
        int sum = 0;
        for(int j=i ; j<n ; j++)  
        {
           if(a[i] == a[j])
           {
               sum = a[i];   
           } 
           else
           {
               sum +=a[j];
           }
           mx = max(mx , sum);
        }
    }
    cout<<"Max SubArray Sum is : "<<mx<<endl;*/
    
    int CurrSum[n+1];
    CurrSum[0] = 0;
    for(int i = 1 ; i<n ; i++)
    {
        CurrSum[i] = CurrSum[i-1] + a[i-1];
    }
    int sum = 0;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=0 ; j<i; j++)
        {
            sum = CurrSum[i] - CurrSum[j]; // here Time Complexity is O(n^2) which is moderate but not good.This approach is Cummulative Sum Approach.
            mx = max(sum , mx);
        }
    }
    cout<<"Max SubArray Sum is : "<<mx<<endl;
    return 0 ;
}
