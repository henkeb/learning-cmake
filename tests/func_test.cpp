#include <gtest/gtest.h>
#include <tst/function_to_test.hpp>

TEST(CalcTest, squareRoot){
    ASSERT_EQ(3, squareRoot(9));
    //EXPECT_DOUBLE_EQ(2.121, squareRoot(4.5));
    EXPECT_NEAR(2.121, squareRoot(4.5), 0.01);
}

TEST(CalcTest, hejFunction){
    EXPECT_EQ("Hej Henrik!", hejFunction("Henrik"));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

