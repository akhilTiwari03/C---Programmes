#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n , q;
    cin >> n >> q;
    int k ;
    int **a = new int*[n] ; 
    int i = 0 , j = 0;
    for(int i =0 ; i<n  ; i++)
    {
        cin>>k;
        a[i] = new int[k];
    
    for(int j =0 ; j < k ; j++)
    {
        cin >> a[i][j];
    }
    }    
    for(int m =0 ; m<q ; m++)
    {
        cin >> i >>j ;
        cout<<a[i][j]<<endl;    
    }       
    return 0;
}
