#include"student.h"

student::student(string fn,string ln,int Age,float Cgpa):person( fn,ln,Age)
{
	cgpa=Cgpa;
	cout<<"student(string,string,int,float) called"<<endl;
}
void student:: setcgpa(float CGPA)
{
	cgpa=CGPA;
}
float student::getcgpa()
{
	return cgpa;
}
student::~student()
{
	cout<<"~student() called"<<endl;
}
void student::printst()
{
	cout<<getfname()<<endl;
	cout<<getlname()<<endl;
	cout<<getage()<<endl;
	cout<<getcgpa()<<endl;
}
void student::printstudent()
{
	/*cout<<first_name<<" ";
	cout<<last_name<<" is ";
	cout<<age<<" years old,his cgpa is ";
	cout<<cgpa<<endl;*/
	cout<<getfname()<<" ";
	cout<<getlname()<<" is ";
	cout<<getage()<<" years old,his cgpa is ";
	cout<<getcgpa()<<endl;
}