//
// Created by lhpke on 2018-10-08.
//
#include <gtest/gtest.h>
#include <cmath>

TEST(calc, addition){
    int x = 4;
    int y = 5;
    int value = x + y;
    EXPECT_EQ(9,value);
    EXPECT_EQ(10,value);
}
TEST(calc, substraction) {
    int x = 4;
    int y = 5;
    int value = x - y;
    EXPECT_EQ(1, value);
    EXPECT_EQ(-1, value);
}
TEST(calc, multiply) {
    int x = 4;
    int y = 5;
    int value = x * y;
    EXPECT_EQ(9, value);
    EXPECT_EQ(20, value);
}
TEST(calc, division) {
    int x = 4;
    int y = 5;
    float value = x / y;
    EXPECT_EQ(0.8, value);
    EXPECT_EQ(8.0, value);
}
TEST(calc, square_root) {
    int x = 4;
    int value = sqrt(x);
    EXPECT_EQ(3, value);
    EXPECT_EQ(2, value);
}


int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
