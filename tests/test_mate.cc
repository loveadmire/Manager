#include <limits.h>
#include <cstdlib>
#include <iostream>
#include <string>

#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../inc/mytest.h"

using ::testing::_;
using ::testing::AtLeast;
using ::testing::Exactly;
using ::testing::Return;
using namespace testing;
using namespace std;

TEST(SWAP_TEST, SWAP_TWO_INT)
{
    int val1 = 10;
    int val2 = 20;
    myswap(val1, val2);
    EXPECT_EQ(20, val1);
    EXPECT_EQ(10, val2);
}

TEST(ADD_TEST_00, ADD_TWO_INT)
{
    EXPECT_EQ(myadd(10, 20), 30);
    EXPECT_LT(myadd(3, 5), 9);
}

TEST(ADD_TEST_01, ADD_TWO_INT)
{
    EXPECT_EQ(myadd(10, 20), 30);
    EXPECT_LT(myadd(3, 5), 9);
}

TEST(ADD_TEST_02, ADD_TWO_INT)
{
    EXPECT_EQ(myadd(10, 20), 30);
    EXPECT_LT(myadd(3, 5), 9);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
