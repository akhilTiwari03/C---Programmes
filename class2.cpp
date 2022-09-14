#include<iostream>
using namespace std;
class Student
{
    char name[10];
    int roll_no;
    int age;
    public:
    void readdata()
    {
        
        cout<<"Enter the Name,Roll No.,Age of Student\n";
        gets(name);
        cin>>roll_no>>age;
        
    }
    void putdata()
    {  
        puts(name);
        cout<<"\n"<<roll_no<<endl<<age;

    }
}s,s1;
int main()
{
    s.readdata();
    s.putdata();
    s1.readdata();
    s1.putdata();
        
    return 0;
}