#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5_2_2/PR5_2_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest522
{
	TEST_CLASS(UnitTest522)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = A(2, 2, 20);
			Assert::AreEqual(t, 3);
		}
	};
}
