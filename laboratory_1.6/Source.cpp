#include "STUDENT.h"
#include "iostream"
using namespace std;

int main()
{
	Student s;
	s.Read();
	s.Display();
	s.setChangeYearOFstudyPlus(1);
	cout << "ChangeYearOFstudyPlus: " << s.getYearOFstudy() << endl;
	return 0;
}