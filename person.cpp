#include"person.h"

person::person()
{
	first_name=" ";
	last_name=" ";
	age=0;
	cout<<"person() called"<<endl;
}
person::person(string fN,string lN,int Age)
{
	first_name=fN;
	last_name=lN;
	age=Age;
	cout<<"person(string,string,int) called"<<endl;
}

void person::setfname(string fname)
{
	first_name=fname;
}
void person::setlname(string lname)
{
	last_name=lname;
}
void person::setage(int Age)
{
	age=Age;
}
string person::getfname()
{
	return first_name;
}
string person::getlname()
{
	return last_name;
}
int person::getage()
{
	return age;
}
void person:: printInformation()
{
	cout<<getfname()<<" ";
	cout<<getlname()<<" is ";
	cout<<getage()<<" years old "<<endl;
}
person::~person()
{
	cout<<"~person()  called"<<endl;
}
