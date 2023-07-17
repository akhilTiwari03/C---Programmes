#include<bits/stdc++.h>
using namespace std;
             
int main() {
    int n = 1e5+2;
    vector<int>primes(n,1);
    vector<int>spf(n, -1);
    primes[0] = primes[1] = 0;
    for(int i = 2; i*i<= n ; i++) {
        if(primes[i]) {
            for(int j = i; i*j <= n; j++) {
                if(primes[i*j] != 1) continue;

                primes[i*j] = 0;
                spf[i*j] = i;
            }
        }
    }
    int num;
    cin >> num;
    int k = 1;
    vector<int>ans(num, k);
    for(int i = 2; i < num+2; i++) {
        int number = i;
        if(spf[number] != -1) {
            k = 2;
            ans[i-2] = k ;
        }
    }
    cout << k << endl;

    for(auto it: ans) {
        cout << it << " ";
    }
    return 0;
}