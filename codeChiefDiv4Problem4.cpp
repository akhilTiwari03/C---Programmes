#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n % 2 == 0 || n% 7 == 0) {
            cout << "Yes" <<endl;
        }
        else if(n < 7 && n%2 != 0) {
            cout <<"No"<<endl;
        }
        else {
            int res = abs(n-9);
            if(res % 2 ==0 || res % 7 == 0){
                cout <<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
    }
}