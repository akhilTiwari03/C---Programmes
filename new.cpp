#include <bits/stdc++.h>
using namespace std;
void diagonalDifference(int *arr , int n) 
{
    int ltsum =0;
    int rtsum =0;
    int result =0;
    for(int i =0 ; i < n ; i++)
    {
        for(int j = 0; j< n ; j++)
        {
            if(i == j)
            {
                rtsum += *((arr +n*i) +j);
            }    
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0; j<n ; j++)
        {
            if(j == n-1-i)
            {
                ltsum += *((arr +n*i) +j);
            } 
            else
            continue;   
        }
    } 
    cout<<rtsum <<" "<<ltsum<<endl;
    result = rtsum-ltsum;
    cout<<result;   
    
}
int main()
{
    int n;
    cin>> n;
    int arr[n][n];
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j< n ;j++)
        {
            cin>>arr[i][j];
        }
    }
    diagonalDifference((int *)arr , n);
    return 0;
}