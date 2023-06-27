#include<iostream>
using namespace std;
// int Unique(int *a , int n)
// {
//     for(int i = 0 ; i < n ; i++)
//     {
//         int chk = a[i];
//         bool flag = 0;
//         for(int j = 0 ; j < n ; j++)
//         {
//             if(i == j)
//             continue;
//             if(a[j] == chk)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(!flag)
//             return a[i];
//     }
//     return -1;
// }
int Unique(int *arr , int n) {
    int xorr = 0;
    for(int i = 0 ; i < n ; i++) {
        xorr ^= arr[i];
    }
    return xorr;
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int r = Unique(a , n);
    cout << "Unique Element is :" << r;
    return 0;
}