#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    int mathMarks;
    int chemMarks;
    int phyMarks;
    public:
    student(int r,string n, int m,int p,int c)
    {
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;

    }
    int total()
    {
        return phyMarks+chemMarks+mathMarks;
    }
    string grade()
    {
        float average = total()/3;
        if(average>60)
        {
            return "A";
        }
        else if(average>=40 && average<60)
        return "B";
        else
        return "C";
    }

};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter student name" ;
    getline(cin,name);
    cout<<"Enter student roll number";
    cin>>roll;
    cout<<"Enter marks in 3 subject";
    cin>>m>>p>>c;
    student s(roll,name,m, p, c);

    cout<<"Report of student is "<<endl;
    cout<<"Name of student is "<<name<<endl;
    cout<<"Roll number of student is "<<roll<<endl;
    cout<<"Total Marks of student : "<<s.total()<<endl;
    cout<<"Grade of student is "<<s.grade()<<endl;

}
