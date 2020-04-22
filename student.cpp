#include<iostream>
using namespace std;

class student
{
    private:
    int roll;
    string name;
    int phyMarks, mathMarks, chemMarks;
     
    public:
    student(int r, string n, int m, int p, int c)
    {
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;
    }
    int total()
    {
        return phyMarks+mathMarks+chemMarks;
    }
    char grade()
    {
        float average=total()/3;
        if(average > 60)
            return 'A';
        else if (average >= 40 && average <= 60)
            return 'B';
        else
            return 'c';
    }
};


int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll Number of a student: ";
    cin>>roll;
    cout<<"Enter Name of a Student: ";
    cin>>name;
    cout<<"enter the marks of math, phy, chem";
    cin>>m>>p>>c;
    student s ( roll,name,m,p,c );
    cout<<"Total Marks: "<<s.total()<<endl;
    cout<<"Grade of Student: "<<s.grade()<<endl;

    return 0;
}