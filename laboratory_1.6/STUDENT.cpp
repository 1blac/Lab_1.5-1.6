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
}

bool Student::setChangeYearOFstudyPlus(int value)
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

void Student::Man::Init(string name, int age, int weight, string gender)
{
	setName(name);
	setAge(age);
	setWeight(weight);
	setGender(gender);
}
void Student::Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "weight = " << weight << endl;
	cout << "gender = " << gender << endl;
}
void Student::Man::Read()
{
	string name;
	int age;
	int weight;
	string gender;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "weight = ? "; cin >> weight;
	cout << "gender = ? "; cin >> gender;
	Init(name, age, weight, gender);
}
