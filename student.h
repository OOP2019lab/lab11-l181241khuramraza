#include<iostream>
#include"person.h"

using namespace std;
//#ifndef STUDENT_H;
//#define STUDENT_H;

class student:public person
{
	private:
		  float cgpa;
	public:
		student(string fn,string ln,int Age,float Cgpa);
		void setcgpa(float CGPA);
		float getcgpa(); 
		void printst();
		void printstudent();
		~student();
};
//#endif;