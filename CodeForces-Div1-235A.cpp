#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n;
    cin >> n;
    
    if(n == 1 or n == 2) {
        cout << n;
        return 0;
    }

    ll ans = 1;
    
    if(n%2 == 0) {
        if(n%3 == 0){
            ans = (n-1)*(n-2)*(n-3);
        }
        else {
            ans = (n)*(n-1)*(n-3);
        }
    }
    else {
        ans = n*(n-1)*(n-2);
    }
    cout << ans;
    return 0;
}