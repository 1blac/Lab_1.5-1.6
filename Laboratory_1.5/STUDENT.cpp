#include "STUDENT.h"
#include <iostream>

using namespace std;

void Student::Init(int yearOFstudy, Man man)
{
	setYearOFstudy(yearOFstudy);
	setMan(man);
}
void Student::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	man.Display(); // використовуємо делегування
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student::Read()
{
	int yearOFstudy;
	Man m;
	cout << endl;
	cout << "Man: " << endl;
	m.Read(); // використовуємо делегування
	cout << "yearOFstudy = ? "; cin >> yearOFstudy;
	Init(yearOFstudy, m);
}bool Student::setChangeYearOFstudyPlus(int value)
{
	if (yearOFstudy + value > 5)
	{
		cout << "inavid value for the year of study" << endl;
		return false;
	}
	else
	{
		yearOFstudy += value;
		return true;
	}
}