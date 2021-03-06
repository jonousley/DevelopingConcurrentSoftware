#include <stdexcept>
#include "gtest/gtest.h"
#include "../Library/string_calculator.h"

TEST(StringCalculatorTests, SumOfZeroAndZeroIsZero)
{
    ASSERT_EQ(0, add("0", "0"));
}

<<<<<<< HEAD
TEST(StringCalculatorTests, SumOfOneAndOneIsTwo)
{
	ASSERT_EQ(2, add("1", "1"));
}

TEST(StringCalculatorTests, SumOfFiveAndEightteenIsTwentythree)
{
	//tests two digit numbers
	ASSERT_EQ(23, add("5", "18"));
}

/////////////////////////////////////////
TEST(StringCalculatorTests, SubtractingZeroAndZeroIsZero)
{
	ASSERT_EQ(0, subtract("0", "0"));
}

TEST(StringCalculatorTests, SubtractingTwoAndThreeIsNegativeOne)
{
	//test negatives
	ASSERT_EQ(-1, subtract("2", "3"));
}

TEST(StringCalculatorTests, SubtractingTwelveAndFiveIsSeven)
{
	//tests two digit numbers
	ASSERT_EQ(7, subtract("12", "5"));
}


////////////////////////////////////////////////
TEST(StringCalculatorTests, ProductOfZeroAndZeroIsZero)
{
	ASSERT_EQ(0, multiply("0", "0"));
}

TEST(StringCalculatorTests, ProductOfTwoAndZeroIsZero)
{
	//second basic case
	ASSERT_EQ(0, multiply("2", "0"));
}

TEST(StringCalculatorTests, ProductOfTwoAndNegativeFiveIsNegativeTen)
{
	//tests one negative
	ASSERT_EQ(-10, multiply("2", "-5"));
}

TEST(StringCalculatorTests, ProductOfNegativeThreeAndNegativeFourIsTwelve)
{
	//tests two negatives
	ASSERT_EQ(12, multiply("-3", "-4"));
}

////////////////////////////////////////////////
TEST(StringCalculatorTests, DividingByZeroIsUndefined)
{
	ASSERT_THROW(divide("5", "0"), std::domain_error);
}

TEST(StringCalculatorTests, DividingFourByNegativeTwoIsNegativeTwo)
{
	//dividing negatives
	ASSERT_EQ(-2, divide("4", "-2"));
}

TEST(StringCalculatorTests, DividingOfEighteenByFourIsFour)
{
	//testing remainder
	ASSERT_EQ(4, divide("18", "4"));
}

TEST(StringCalculatorTests, DividingTwentyoneByElevenIsOne)
{
	//dividing two digit numbers with two digit remainder
	ASSERT_EQ(1, divide("21", "11"));
=======
TEST(StringCalculatorTests, SumOfOneAndZeroIsOne)
{
    ASSERT_EQ(1, add("1", "0"));
}

TEST(StringCalculatorTests, SumOfZeroAndOneIsOne)
{
    ASSERT_EQ(1, add("0", "1"));
}

TEST(StringCalculatorTests, SumOfZeroAndNegativeOneIsNegativeOne)
{
    ASSERT_EQ(-1, add("0", "-1"));
}

TEST(StringCalculatorTests, DifferenceOfThreeAndTwoIsOne)
{
    ASSERT_EQ(1, subtract("3", "2"));
}

TEST(StringCalculatorTests, DifferenceOfTwoAndThreeIsNegativeOne)
{
    ASSERT_EQ(-1, subtract("2", "3"));
}

TEST(StringCalculatorTests, ProductOfTwoAndThreeIsSix)
{
    ASSERT_EQ(6, multiply("2", "3"));
}

TEST(StringCalculatorTests, QuotientOfSixAndThreeIsTwo)
{
    ASSERT_EQ(2, divide("6", "3"));
}

TEST(StringCalculatorTests, DivideThrowsInvalidArgumentExceptionWhenRightIsZero)
{
    ASSERT_THROW(divide("6", "0"), std::invalid_argument);
>>>>>>> 062c77192f80d862961d77ca50bbebf97c987e57
}