//Largest length of a word in  a sentence and Print that  Word
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore(); // as we are going to use getline fun then ignore/ flush helps us to clear the buffer
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int CurrSum = 0;
    int MaxSum = 0;
    int st =0 , maxst=0;
    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if (CurrSum > MaxSum)
            {
                MaxSum =  CurrSum ;
                maxst = st; // this will update the starting value of word
            }
            CurrSum = 0;
            st =i+1; // this will update the value of st when any space is encountered to next index 
        }
        else
        {
            CurrSum++;
        }
        if(arr[i] == '\0')
        break;
        i++;
    }
    cout<<MaxSum<<endl;
    for(int i=0 ; i<MaxSum ; i++)
    {
        cout<<arr[i + maxst] ; // 0+starting value of word till length of that word as it is maximum.
    }
    return 0;
}
