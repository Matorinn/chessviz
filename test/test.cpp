#include "../src/board.hpp"
#include "gtest/gtest.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

char a[8][8] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

TEST(MoveTest, Kingtestfrst)
{
    int code;
    string returned = "Kc2-e4";
    code = king(returned, a);
    EXPECT_EQ(1, code);
}

TEST(MoveTest, Kingtestscnd)
{
    int code;
    string returned = "Ke1xe2";
    code = king(returned, a);
    EXPECT_EQ(0, code);
}

TEST(MoveTest, Rooktestfrst)
{
    int code;
    string returned = "Rh1xh7";
    code = rook(returned, a);
    EXPECT_EQ(0, code);
}

TEST(MoveTest, Rooktestscnd)
{
    int code;
    string returned = "Ra8-e4";
    code = rook(returned, a);
    EXPECT_EQ(1, code);
}

TEST(MoveTest, Queentestfrst)
{
    int code;
    string returned = "Qd1-e3";
    code = queen(returned, a);
    EXPECT_EQ(1, code);
}

TEST(MoveTest, Queentestscnd)
{
    int code;
    string returned = "Qd1-d4";
    code = queen(returned, a);
    EXPECT_EQ(0, code);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
