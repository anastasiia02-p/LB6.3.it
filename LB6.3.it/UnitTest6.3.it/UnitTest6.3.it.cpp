#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.3.it/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int count = 0;
			countA(arr, 0, count);
			Assert::AreEqual(count, 0);

		}
	};
}
