#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, r;
    cin >> n >> p >> q >> r;
    vector<long long>arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long pmax[n];
    pmax[0] = arr[0]*p;
    long long smax[n];
    smax[n-1] = arr[n-1]*r;

    long long ans = LLONG_MIN;
    for(int i = 1, j = n-2; i < n, j >= 0; i++, j--) {
        pmax[i] = max(pmax[i-1], arr[i]*p);
        smax[j] = max(smax[j+1], arr[j]*r);

    }
    for(int i = 0; i < n; i++) {
        long long tmp = pmax[i] + q*arr[i] + smax[i];
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}