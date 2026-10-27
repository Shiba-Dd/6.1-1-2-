#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1/6.1(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
        TEST_METHOD(TestSatisfyCriterion)
        {
            Assert::AreEqual(true, satisfyCriterion(-5));  
            Assert::AreEqual(true, satisfyCriterion(-4));  
            Assert::AreEqual(true, satisfyCriterion(3));  
            Assert::AreEqual(false, satisfyCriterion(4));  
            Assert::AreEqual(false, satisfyCriterion(0));  
        }
        TEST_METHOD(TestCountElements)
        {
            int arr[5] = { -3, 4, 5, 2, -2 }; 
            int expectedCount = 3;
            int actualCount = countElements(arr, 5);

            Assert::AreEqual(expectedCount, actualCount);
        }
        TEST_METHOD(TestSumElements)
        {
            int arr[5] = { -3, 4, 5, 2, -2 }; 
            int expectedSum = 0;
            int actualSum = sumElements(arr, 5);

            Assert::AreEqual(expectedSum, actualSum);
        }
        TEST_METHOD(TestReplaceWithZeros)
        {
            int arr[5] = { -3, 4, 5, 2, -2 };
            int expectedArr[5] = { 0, 4, 0, 2, 0 };

            replaceWithZeros(arr, 5);

            for (int i = 0; i < 5; ++i) {
                Assert::AreEqual(expectedArr[i], arr[i]);
            }
        }
	};
}
