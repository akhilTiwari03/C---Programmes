#include<iostream>
using namespace std;
int ReturnSubsetSumToK(int *a , int n , int **output , int k)
{
    int** o1 = new int *[3500];
    for(int i = 0 ; i < 3500 ; i++)
    {
        o1[i] = new int [20];
    }
    int** o2 = new int *[3500];
    for(int i = 0 ; i < 3500 ; i++)
    {
        o2[i] = new int [20];
    }   
    if(n==0)
    {
        if(k==0)
        {
            output[0][0] = 0;
            return 1;
        }
        else
            return 0;
    }
    int s1 = ReturnSubsetSumToK(a+1 , n-1 , o1 , k - a[0]);
    int s2 = ReturnSubsetSumToK(a+1 , n-1 , o2 , k );
    for(int  i = 0 ; i < s1 ; i++)
    {
        output[i][0] = o1[i][0]+1;
        output[i][1] =  a[0];
        for(int j = 1 ; j < output[i][0]; j++)
        {
            output[i][j+1] = o1[i][j];
        }
    }
    for(int i = 0 ; i < s2 ; i++)
    {
        for(int j = 0 ; j <= o2[i][0] ; j++)
        {
            output[i+s1][j] = o2[i][j];
        }
    }
    for(int i = 0 ; i<3500 ; i++)
    {
        delete []o1[i];
    }
    delete []o1;
    for(int i = 0 ; i<3500 ; i++)
    {
        delete []o2[i];
    }
    delete [] o2;
    return (s1 + s2);
}
int main()
{
    int n;
    cin >> n;
    int *a  = new int [n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int** output = new int *[3500];
    for(int i = 0 ; i < 3500 ; i++)
    {
        output[i] = new int [20];
    }
    int k;
    cin >> k;
    int s = ReturnSubsetSumToK(a , n , output , k);
    for(int i = 0 ; i < s ; i++)
    {
        for(int j = 1 ; j <= output[i][0] ; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0 ; i<3500 ; i++)
    {
        delete []output[i];
    }
    delete []output;
    delete []a;
    return 0;
}