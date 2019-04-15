#include"faculty.h"

faculty::faculty(string fn,string ln,int age,int cCount,int ttel):person(fn,ln,age)
{
	ccount=cCount;
	dtele=ttel;
	cout<<"faculty(string,string,int,int,int) called"<<endl;
}
void faculty:: setccount(int coursec)
{
	ccount=coursec;
}
void faculty:: setdtele(int tel)
{
	dtele=tel;
}
int faculty::getccount()
{
	return ccount;
}
int faculty::getdtele()
{
	return dtele;
}
void faculty::printfac()
{

	cout<<getfname()<<endl;
	cout<<getlname()<<endl;
	cout<<getage()<<endl;
	cout<<getccount()<<endl;
	cout<<getdtele()<<endl;
}
void faculty::printfaculty()
{

	cout<<"Faculty Member name: "<<getfname()<<" ";
	cout<<getlname()<<", Age: ";
	cout<<getage()<<",Number of courses: ";
	cout<<getccount()<<", Ext. ";
	cout<<getdtele()<<endl;/////////“Faculty Member name: Richard Karp, Age: 45, Number of courses: 2, Ext. 420”
}
faculty::~faculty()
{
	cout<<"~faculty() called"<<endl;
}