#include<iostream>
using namespace std;
int ReturnSubset(int *a , int n , int **output)
{
    if(n == 0) 
    {
        output[0][0] =0;
        return 1;
    }
    int smalloutput = ReturnSubset(a+1 , n-1 , output);
    for(int i = 0 ; i < smalloutput ; i++)
    {
        output[i+smalloutput][0] = output[i][0] + 1 ;
        output[i+smalloutput][1] = a[0];
    }
    for(int i = smalloutput; i< 2*smalloutput ; i++)
    {
        for(int j = 2 ; j < output[i-smalloutput][0] + 2 ; j++)
        {
            output[i][j] = output[i - smalloutput][j-1];
        }
    }
    return 2*smalloutput;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int **Output = new int* [3500];
    for(int  i = 0; i < 3500 ; i++)
    {
        Output[i] = new int [20];
    }
    int s = ReturnSubset(a , n , Output);
    for(int i = 0 ; i < s ; i++)
    {
        for(int j = 1 ; j <=Output[i][0] ; j++)
        {
            cout << Output[i][j] <<" ";
        }
        cout << endl;
    }
    for(int i = 0 ; i < 3500 ;  i++)
    {
        delete [] Output[i];
    }
    delete []Output;
    delete []a;
    return 0;

}