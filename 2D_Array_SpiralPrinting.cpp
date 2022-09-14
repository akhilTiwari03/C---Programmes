#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i =0 ; i<n ; i++)
    {
        for(int j =0 ; j<m ; j++)
        {
            cin>>a[i][j];
        }
    }
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0 ;
    int col_end = m-1;
    while(row_start <= row_end && col_start <= col_end)
    {
        //for row start
        for(int col = col_start ; col <= col_end ; col++)
        {
            cout<<a[row_start][col]<<"  ";
        }cout<<endl;
        row_start++;
        // for column end
        for(int row = row_start ; row <= row_end ; row++)
        {
            cout<<a[row][col_end]<<"  ";
        }cout<<endl;
        col_end--;
        // for row end
        for(int col = col_end ; col >= col_start ; col--)
        {
            cout<<a[row_end][col]<<"  ";
        }cout<<endl;
        row_end--;
        // for column start 
        for(int row = row_end ; row >= row_start ; row--)
        {
            cout<<a[row][col_start]<<"  ";
        }cout<<endl;
        col_start++;
    }
    return 0;
}