#pragma once
#include <string>

using namespace std;

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