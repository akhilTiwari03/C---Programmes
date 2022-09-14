#include<iostream>
using namespace std;
void arrayIntersection(int *a1 , int *a2 , int n1 , int n2)
{
    for(int i = 0  ; i < n1 ; i++ )
    {
        for(int j = 0 ;  j < n2 ; j++)
        {
            if(a1[i] == a2[j])
            {
                cout << a1[i] << " ";
                a1[i] = -2130456; 
                a2[j] = -21343;
                break;
            }
        }
    }
}
int main()
{
    int n1 ;
    cin >> n1;
    int a1[100];
    for(int i = 0 ; i < n1 ; i++)
    {
        cin >> a1[i];
    }
    int n2 ;
    cin >> n2;
    int a2[100];
    for(int i = 0 ; i < n2 ; i++)
    {
        cin >> a2[i];
    }
    arrayIntersection(a1 , a2 , n1 , n2);
    return 0;
}