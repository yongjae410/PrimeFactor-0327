#include "gmock/gmock.h"
#include "prime_factor.cpp"

#include <vector>

using std::vector;
using namespace testing;


TEST(PrimeFactorTestGroup, tc1)
{
	PrimeFactor pf;
	vector<int> expected { };
	EXPECT_EQ(expected, pf.of(1));
}


int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}