// Find an Element in a sorted matrix means whose each row and column is Sorted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,target;
    cin>> n >> m >> target;
    int a[n][m];
    for(int i=0 ; i < n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin >> a[i][j];
        }
    }
  /*  bool found =false;
    for(int i=0 ; i < n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(a[i][j] == target)  // Time Complexity of this approach is O(n*m) . We can do much better from this
            {
                found =  true;
            }
        }
    }
    if(found)
    {
        cout<<"Element found !"<<endl;
    } 
    else 
    cout<<"Element not found !"<<endl;*/
    int row = 0 , col = m-1; // this i have initialised so that wee can make row and colums in opposite as n =0 been the first element of the row and m-1 be the last element of the column
    bool found = false;
    while(row<n && col>=0) // as our  matrix is  completely sorted so we can follow this approach
    {
       if(a[row][col] == target) 
       {
           found = true;
           break;
       }
       else if (a[row][col] > target){
        col--;}
        else
        row++;
    }
    if(found)
    cout<<" Element is Found !"<<endl;
    else
    cout<<" Element is not found !"<<endl;
    return 0;
}