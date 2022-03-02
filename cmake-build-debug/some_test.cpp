//
// Created by lhpke on 2018-10-04.
//
#include <gtest/gtest.h>
#include <../main.cpp>
TEST(string_test, length){
    std::string str("Alice is a girl");
    ASSERT_EQ(str.length(),15);
}

TEST(string_test, front){
    std::string str("Alice is a girl");
    ASSERT_EQ (str, front(),'a');
}

TEST(string_test, at_throw){
    std::string str("Alice is a girl");
    ASSERT_THROW (str.at(100), std::our_of_range);
}

TEST(string_test, at_no_throw){
    std::string str("Alice is a girl");
    ASSERT_NO_THROW (str.at(str.length() -1));
}

TEST(string_advance, con){
    std::string s1("first");
    std::string s2("second");
    ASSERT_EQ (s1+s2, "firstsecond");
}