#include<iostream>
#include"faculty.h"
#include"person.h"
#include"student.h"
using namespace std;

int main()
{
	student obj1("Ted" ,"Thompson",22,3.91);////student(string fn,string ln,int Age,float Cgpa);
	faculty obj2("Richard" ,"Karp",45,2,420);//	faculty(string fn,string ln,int age,int ccount,int ttel);
	obj1.printst();
	obj2.printfac();
	obj1.printstudent();
	obj2.printfaculty();
	system("pause");
}
