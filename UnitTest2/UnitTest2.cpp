#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double x = 1;
			const double y = 2;
			t = g(x, y);
			Assert::AreEqual(t,1,4);
		}

		};
	};
