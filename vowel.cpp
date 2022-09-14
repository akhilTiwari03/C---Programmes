#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,i=0,v=0,c=0,ws=0 ;
    char *p ;
    cout<<"Enter the size of an array : ";
    cin>>n;
    cin.ignore();
    p = (char*)calloc(n,sizeof(char));
    cout<<"\nEnter the Array of "<<n<<" Elements : " <<endl;
    cin.getline(p,n+1);
    cin.ignore();
    while(p[i]!='\0')
    {
       if(p[i]=='A' || p[i]=='E' || p[i] =='I' || p[i] == 'O' || p[i] == 'U'||
       p[i]=='a' || p[i]=='e' || p[i] =='i' || p[i] == 'o' || p[i] == 'u')
       {
           v++;
       }
    
     else if(p[i] == ' ')
     {
       ws++;
     }
     else
      {
       c++;
      }
       i++;
    }
    cout<<" No of Vowels in the given Array are : "<<v;
    cout<<"\n No of Consonants in the given Array are : "<<c;
    cout<<"\n No of WhiteSpaces in the given Array are : "<<ws;
    return 0;

}