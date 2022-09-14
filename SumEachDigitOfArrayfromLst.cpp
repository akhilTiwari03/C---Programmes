#include<iostream>
using namespace std;
int SumOFArray(int *a1 , int *a2 , int n1 , int n2 , int *ans)
{
    int carry = 0 , k;
    int i = n1 - 1;
    int j = n2 - 1;
    if(n1 > n2)
    k = n1 ;
    else
    k = n2;
    int r = k;
    while(i >= 0 || j >= 0) 
    {
        int an = 0 ,ls;
        if(i >= 0 && j >=  0)
        {
            an = a1[i] + a2[j] + carry;
            ls = an % 10;
            ans[k] = ls;
            carry = an /10 ;
            i--;
            j--;
            k--;
        }
        else if(i >= 0)
        {
            an = a1[1] + carry;
            ls = (an % 10);
            ans[k] = ls;
            carry =  an/10;
            i--;
            k--;
        }
        else if(j >= 0)
        {
            an = a2[1] + carry;
            ls = (an % 10);
            ans[k] = ls;
            carry =  an/10;
            j--;
            k--;
        }
    }
    ans[k] = carry;
    return r+1 ; 
}
int main()
{
    int n1;
    cin >> n1;
    int a1[100];
    for(int i = 0 ; i < n1 ; i++)
    {
        cin >> a1[i];
    }
    int n2;
    cin >> n2;
    int a2[100];
    for(int i = 0 ; i < n2 ; i++)
    {
        cin >> a2[i];
    }
    int ans[101];
    int n3 = SumOFArray(a1 , a2 , n1 , n2 , ans);
    for(int i = 0 ; i < n3 ; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}