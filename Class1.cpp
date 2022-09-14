#include<iostream>
#include<string>
using namespace std;
class Test
{
    int testcode;
    char *description,n;
    int no_of_candidate;
    int centerReqd;
    int calcntr()
    {
        return centerReqd = no_of_candidate/100+1;
    }
    public :
    void Description()
    {
        cout<<"Enter the words you want to enter for description:\n";
        cin>>n;
        description = (char*)malloc((n+1)*sizeof(char));
    }     
    
    void Schedule()
    {
        cout<<"Enter the Testcode, Description, Number of candidates :\n"; 
        cin>>testcode;
        gets(description);
        cin>>no_of_candidate;
        calcntr();
    }
    
    void DispTest();
}s;
int main()
{
s.Description();    
s.Schedule();
s.DispTest();
return 0;
}
void Test::DispTest()
{
    cout<<"On the basis of data entered by You Centers Required are:";
    cout<<"Testcode : "<<testcode<<"\nDescription : ";
    puts(description);
    cout<<"\nNo of Candidates : "<<no_of_candidate<<"\nCenters required : "<<centerReqd;
}
