#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5_1/PR5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = g(3, 0, 1);
			Assert::AreEqual(t, 5);

			//int t;
			//t = A(2, 2, 20);
			//Assert::AreEqual(t, 3);
		}
	};
}
