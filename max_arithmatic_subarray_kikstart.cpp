#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n]; // arithmatic array is that array which has the same difference as in AP between two adjacent elements
    for(int i = 0 ; i<n ; i++)
    {
        cin>> arr[i];
    }
    int pd = arr[1] - arr[0]; 
    int j = 2; // j is used to  compare the prev diff with curr diff as 1st case is done ab in pd.
    int curr_ans = 2;
    int final_ans = 2;
    while(j<n)
    {
        if (pd == arr[j]-arr[j-1])
        {
            curr_ans++;
        }
        else
        {
            pd = arr[j]-arr[j-1];
            curr_ans = 2;
        }
        final_ans = max(final_ans , curr_ans);
        j++;
    }
    cout<<final_ans;
    return 0;
}