#include<iostream>
#include"person.h"
using namespace std;

class faculty:public person
{
	private:
		int ccount;
		int dtele;
	public:
		faculty();
		faculty(string fn,string ln,int age,int ccount,int ttel);
		void setccount(int coursec);
		void setdtele(int tel);
		int getccount();
		int getdtele();
		void printfac();
		void printfaculty();
		~faculty();
};
