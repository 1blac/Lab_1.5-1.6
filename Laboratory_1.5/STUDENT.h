#pragma once
#include <string>
#include "MAN.h"
using namespace std;
class Student
{
private:
	int yearOFstudy;
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
