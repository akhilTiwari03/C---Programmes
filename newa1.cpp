/*#include <bits/stdc++.h>

using namespace std;
void miniMaxSum(int *a , int n)
{
    int maxsum =INT_MIN;
    int minsum = INT_MAX;
    int sum =0 ;
    for(int i = 0 ; i < n ; i++)
    {
        sum =0;
        for(int j =0 ; j<n ; j++)
        {
            if(j!=i)
            sum +=(*(a + j));
            maxsum = max(maxsum , sum);
        }
        minsum = min(minsum , sum);
    }   
    cout<<minsum <<" "<<maxsum;

}

int main()
{
    int n; 
    cin >> n;
    int arr[n];
    for(int i =0 ; i< n ;i++)
    {
        cin >> arr[i];
    }
    miniMaxSum(arr , n);
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(int *a  , int n)
{
    int ct =0;
    const   int  N = 1e5 +2;
    int chk[N];
    for( int i = 0 ;  i<N ; i++)
    {
        chk[i] = -1;
    }
    for(int i =0 ; i< n ; i++)
    {
        if(chk[a[i]] != -1)
        {
            ct++;
        }
       else
        chk[a[i]] = i;
        
    }
    return ct+1;
}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<birthdayCakeCandles(arr , n);
    return 0;
}
