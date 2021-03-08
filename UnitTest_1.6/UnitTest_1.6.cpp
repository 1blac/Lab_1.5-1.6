#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory_1.6/STUDENT.h"
#include "D:\ООП\laboratory_1.6\STUDENT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student::Man h;
			int c = h.getWeight();
			Assert::AreNotEqual(c, 51);
		}
	};
}
