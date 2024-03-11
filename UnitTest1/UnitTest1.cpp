#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.1/Money.h"
#include "D:\project C++ 2\lab 2.1\lab 2.1\Money.cpp"
#include "D:\project C++ 2\lab 2.1\lab 2.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Money m{};
			m.Init(100, 5);
			int expectedSum = 500;
			int actualSum = m.summa();
			Assert::AreEqual(expectedSum, actualSum);
		}
	};
}
