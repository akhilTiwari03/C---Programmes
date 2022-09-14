#include<bits/stdc++.h>
using namespace std ;
int binarySearch(int arr[] , int n , int key)
{
    int start = 0 , end = n ;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] == key)
        {
            return (mid+1);
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        start =  mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++)
    {
        cin>> arr[i];
    }
    int key ;
    cin>>key;
    cout<<key <<" is found at Position "<<binarySearch(arr,n,key)<<endl;
    return 0;
}