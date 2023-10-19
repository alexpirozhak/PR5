#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5_3/PR5_3.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double pi = atan(1.0)*4;
			double t;
			t = r(pi / 2);
			Assert::AreEqual(t, 0.0);

		}
	};
}
