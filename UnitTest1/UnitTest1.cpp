#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 5;
			double tolerance = 0.0001;
			Assert::AreEqual(S0(N), S1(N, 1), tolerance);
			Assert::AreEqual(S0(N), S2(N, N), tolerance);
			Assert::AreEqual(S0(N), S3(N, 1, 0.0), tolerance);
			Assert::AreEqual(S0(N), S4(N, N, 0.0), tolerance);
		}
	};
}
