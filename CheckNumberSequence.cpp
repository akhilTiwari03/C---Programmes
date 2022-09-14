#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool increasing = 0;
    int i = 1;
    int curr , prev ;
    cin >> prev;
    while(i < n)
    {
        i++;
        cin >> curr;
        if(curr < prev && increasing == 0)
        {
            prev = curr;
            continue;
        }
        else if(curr > prev && increasing == 0)
        {
            prev = curr;
            increasing = 1;
            continue;
        }
        else if(curr > prev && increasing == 1)
        {
            prev = curr;
            continue;
        }
        else
        {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
    return 0;
}