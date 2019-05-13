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

TEST(MoveTest, FirstMoveTest)
{
    int code;
    std::string input = "Ke2-e4";
    code = king(input, a);
    EXPECT_EQ(1, code);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
