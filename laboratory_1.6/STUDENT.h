#pragma once
#include <string>

using namespace std;

class Student
{
public:
	int yearOFstudy;
	class Man
	{
	private:
		string name;
		int age;
		int weight;
		string gender;
	public:
		string getName() const { return name; }
		int getAge() const { return age; }
		int getWeight() const { return weight; }
		string getGender() const { return gender; }
		void setName(string name) { this->name = name; }
		void setAge(int age) { this->age = age; }
		void setWeight(int weight) { this->weight = weight; }
		void setGender(string gender) { this->gender = gender; }
		void Init(string name, int age, int weight, string gender);
		void Display() const;
		void Read();
	};
	Man man;
public:
	int getYearOFstudy() const { return yearOFstudy; }
	Man getMan() const { return man; }
	void setYearOFstudy(int yearOFstudy) { this->yearOFstudy = yearOFstudy; }
	bool setChangeYearOFstudyPlus(int);
	void setMan(Man man) { this->man = man; }
	void Init(int yearOFstudy, Man man);
	void Display() const;
	void Read();
};