#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.1/project10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			char s[9] = "1.2.3945";
			int count = 0;
			c = find_index_in_row(s, &count);
			Assert::AreEqual(c, 0);
		}
	};
}
