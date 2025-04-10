#include "gmock/gmock.h"
#include "prime_factor.cpp"

#include <vector>

using std::vector;
using namespace testing;

class PrimeFactorTestFixture : public Test
{
public:
	PrimeFactor pf;
	vector<int> expected = { };
};


TEST_F(PrimeFactorTestFixture, tc1)
{
	EXPECT_EQ(expected, pf.of(1));
}

TEST_F(PrimeFactorTestFixture, tc2)
{
	expected.push_back(2);
	EXPECT_EQ(expected, pf.of(2));
}

TEST_F(PrimeFactorTestFixture, tc3)
{
	expected.push_back(3);
	EXPECT_EQ(expected, pf.of(3));
}

TEST_F(PrimeFactorTestFixture, tc4)
{
	expected.push_back(2);
	expected.push_back(2);
	EXPECT_EQ(expected, pf.of(4));
}

TEST_F(PrimeFactorTestFixture, tc6)
{
	expected.push_back(2);
	expected.push_back(3);
	EXPECT_EQ(expected, pf.of(6));
}

TEST_F(PrimeFactorTestFixture, tc9)
{
	expected.push_back(3);
	expected.push_back(3);
	EXPECT_EQ(expected, pf.of(9));
}

TEST_F(PrimeFactorTestFixture, tc20)
{
	expected.push_back(2);
	expected.push_back(2);
	expected.push_back(5);
	EXPECT_EQ(expected, pf.of(20));
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}