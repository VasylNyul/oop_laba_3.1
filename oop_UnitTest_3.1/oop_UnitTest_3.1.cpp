#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_3.1/Triad.h"
#include "C:\Users\apple\source\repos\oop_laba_3.1\oop_laba_3.1\Triad.cpp"
#include "../oop_laba_3.1/Vector3D.h"
#include "C:\Users\apple\source\repos\oop_laba_3.1\oop_laba_3.1\Vector3D.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest31
{
	TEST_CLASS(oopUnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad c(2, 3, 1), d(2, 2, 2);

			Vector3D a(c), b(d);

			Assert::AreEqual(a * b, 12);
		}
	};
}
