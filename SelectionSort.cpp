#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[] , int n)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        for(int j = i+1 ; j<n ; j++ )
        {
            if(arr[i] >= arr[j])
            {
                int temp; 
                temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ; 
            }
        }
    }
    cout<<" The array After Sorting is : "<<endl;
    for(int i = 0 ; i<n ;i++)
    {    
    cout<<arr[i]<<endl;
    }
}
int main ()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0 ; i<n ;i++)
    {
        cin>> arr[i];
    }
    cout<< "The array Before Sorting is : "<<endl;
    for(int i = 0 ; i<n ;i++)
    {
        cout <<arr[i]<<endl;
    }    
    SelectionSort(arr , n);
    
    return 0; 

}