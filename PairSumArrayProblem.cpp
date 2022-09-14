#include<bits/stdc++.h>
using namespace std;
bool pairSum(int a[] , int n , int k)
{
    int st = 0 , end = n-1;
    while (st<end)
    {
        if(a[st] + a[end] == k)
        {
            cout<<st+1<< " " << end+1 <<endl; 
            return true;
        }
        else if(a[st] + a[end] < k)
        {
            st ++;
        }
        else 
        {
            end --;
        }
    }
    return false ;
}
int main()
{
    int n ,k;
    cin>>n>>k;
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 1 ; i<n ; i++) //Sorting 
    { 
        int current = a[i];
        int j = i-1;
        while(a[j] >= current && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
    cout<<pairSum(a , n , k)<<endl;
    return 0;
}    