#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5_2(1)/PR5_2_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest521
{
	TEST_CLASS(UnitTest521)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t=20;
			A(2, 2, t);
			Assert::IsTrue(t == 3.0);
		}
	};
}
