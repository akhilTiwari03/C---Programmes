#include<bits/stdc++.h>
using namespace std;
long VariationPairWithDiffK(int *arr, int n, int k) {
    int i = 0 ;
    int j = 1;
    sort(arr, arr+n);
    long count = 0;
    while(j < n) {
        if(arr[j]-arr[i] >= k){
            count += n-j;
            i++;
        }
        else {
            j++;
        }
    }
    return count;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,  k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        long count = VariationPairWithDiffK(arr, n, k);
        cout << count<<endl;
    }
    return 0;
    
}