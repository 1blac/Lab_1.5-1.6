#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratory_1.5/MAN.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man h;
			int c = h.getWeight();
			Assert::AreNotEqual(c,51);
		}
	};
}
