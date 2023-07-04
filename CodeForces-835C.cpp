#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
             
int main() {
    ll n, q, c;
    cin >> n >> q >>c;

    vector<vector<vector<ll>>> arr(11, vector<vector<ll>>(101, vector<ll>(101, 0)));
    for(int i = 0;i < n; i++) {
        int x, y, s;
        cin >> x >> y >> s;
        arr[s][x][y]++; 
    }

    for(int i = 0; i <= c; i++)  {
        for(int j = 1; j <= 100; j++) {
            for(int k = 1; k <= 100; k++) {
                arr[i][j][k] += arr[i][j-1][k] + arr[i][j][k-1] - arr[i][j-1][k-1];
            }
        }
    }
    while(q--) {
        ll t, x1, y1, x2, y2; // where t is moment
        cin >> t >> x1 >> y1 >>x2 >> y2;
        ll ans = 0;
        for(int i = 0; i <= c; i++) {
            ll brightness = (i+t) % (c+1); // to make t in the range of c as it cannot go outof range of c as after every c brightness is becoming 0
            ll amount = arr[i][x2][y2] - arr[i][x1-1][y2] - arr[i][x2][y1-1] + arr[i][x1-1][y1-1];

            ans += amount * brightness;
        }
        cout << ans<< endl;

    }
    return 0;
}