// #include<bits/stdc++.h>
// using  namespace std;
// int subsequences(string s , string output[])
// {
//     if((s.empty()))
//     {
//         output[0] = "";
//         return 1;
//     }
//     int size = subsequences(s.substr(1) , output);
//     for(int i =  0 ; i < size ; i++)
//     {
//         output[i + size] = s[0] + output[i];
//     }
//     return 2*size;
// }
// int main()
// {
//     string s;
//     getline(cin , s);
//     int length = s.size();
//     int x = pow(2,length);
//     string* output = new string[x];
//     int n = subsequences(s , output);
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout << output[i] << endl;
//     }
//     cout << n;
//     return 0;
// }
                      // 2Nd Method //
#include<bits/stdc++.h>
using namespace std;
void printsubstr(string input , string output)
{
    if((input.empty()))
    {
        cout << output << endl;
        return;
    }
    printsubstr(input.substr(1) , output);
    printsubstr(input.substr(1) , output + input[0]);
}
int main()
{
    string input;
    cin >> input;
    string output = "";
    printsubstr(input , output);
    return 0;
}
                      