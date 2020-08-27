#include "gtest/gtest.h"
#include "Lib/Lib.hpp"

TEST(SimpleTest, OneisOne){
    EXPECT_EQ(1,f(1));
}

TEST(SimpleTest, ZeroisNotOne){
    EXPECT_NE(1, f(0));
}