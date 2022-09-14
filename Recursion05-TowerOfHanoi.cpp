#include<iostream>
using namespace std;
void TowerOfHanoi(int n , char source , char helper , char destination)
{
    if(n > 0) 
    {
        TowerOfHanoi(n-1 , source  , destination , helper);
        cout << source <<"      " << destination << endl << endl;
        TowerOfHanoi(n-1 , helper , source , destination);
    }
}
int main()
{
    int a;
    cin >> a;
    TowerOfHanoi(a , 'a' , 'b' , 'c');
    return 0;
}