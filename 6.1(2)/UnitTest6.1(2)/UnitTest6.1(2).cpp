#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1(2)/6.1(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
        TEST_METHOD(Test_satisfyCriterion)
        {
            Assert::AreEqual(true, satisfyCriterion(-5)); 
            Assert::AreEqual(true, satisfyCriterion(-4));  
            Assert::AreEqual(true, satisfyCriterion(3));  
            Assert::AreEqual(false, satisfyCriterion(4));  
            Assert::AreEqual(false, satisfyCriterion(0));  
        }

    
        TEST_METHOD(Test_generateArrayRecursive)
        {
            const int SIZE = 24;
            const int MIN_VAL = -50;
            const int MAX_VAL = 15;
            int arr[SIZE];

            generateArrayRecursive(arr, SIZE, MIN_VAL, MAX_VAL);

            for (int i = 0; i < SIZE; ++i) {
                bool inRange = (arr[i] >= MIN_VAL && arr[i] <= MAX_VAL);
                Assert::AreEqual(true, inRange);
            }
        }

      
        TEST_METHOD(Test_countElementsRecursive)
        {

            int arr[5] = { -3, 4, 5, 2, -2 };

            int expectedCount = 3;
            int actualCount = countElementsRecursive(arr, 5);

            Assert::AreEqual(expectedCount, actualCount);
        }


        TEST_METHOD(Test_sumElementsRecursive)
        {
  
            int arr[5] = { -3, 4, 5, 2, -2 };

            int expectedSum = 0;
            int actualSum = sumElementsRecursive(arr, 5);

            Assert::AreEqual(expectedSum, actualSum);
        }

    
        TEST_METHOD(Test_replaceWithZerosRecursive)
        {
            int arr[5] = { -3, 4, 5, 2, -2 };
            int expectedArr[5] = { 0, 4, 0, 2, 0 };

            replaceWithZerosRecursive(arr, 5);

            for (int i = 0; i < 5; ++i) {
                Assert::AreEqual(expectedArr[i], arr[i]);
            }
        }
	};
}
