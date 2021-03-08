#include "MAN.h"
#include <iostream>
using namespace std;
void Man::Init(string name, int age, int weight, string gender)
{
	setName(name);
	setAge(age);
	setWeight(weight);
	setGender(gender);
}
void Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "weight = " << weight << endl;
	cout << "gender = " << gender << endl;
}
void Man::Read()
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