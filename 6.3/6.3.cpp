#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3 іт/6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My63
{
	TEST_CLASS(My63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int arr[size];
			Create(arr, size, -10, 10);

			for (int i = 0; i < size; i++)
			{
				Assert::IsTrue(arr[i] >= -10 && arr[i] <= 10);
			}
		
		}
	};
}
