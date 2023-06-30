#include<bits/stdc++.h>
using namespace std;
             
int main() {
    int n, m;
    cin >> n >> m;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int prefixSum[n];
    prefixSum[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    int sum = 0;
    for(int i = 0;i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        int tmp;
        if(x > 0) {
            tmp = prefixSum[y] - prefixSum[x-1];
        }
        else {
            tmp = prefixSum[y];
        }
        if(tmp > 0){
            sum += tmp;
        }
    }
    cout <<  sum;
    return 0;
}