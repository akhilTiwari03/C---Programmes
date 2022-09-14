#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>> a[i];
    }
    int mx = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i ; j<n ; j++)
        {
            int sum =0;
            for(int k = i ; k<=j ; k++)
            {
                sum += a[k];  //Time complexity is O(n^3) which is very very poor.this approach is Brute force .
                mx = max(mx , sum);
            }
        }
    }
    cout<<"Max SubArray Sum is : "<<mx<<endl;
    return 0;
}