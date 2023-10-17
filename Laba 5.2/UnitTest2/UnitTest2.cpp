#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 5.2/Laba 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = A(2, 4, 3);
			Assert::AreEqual(t, 0);
		}
	};
}
