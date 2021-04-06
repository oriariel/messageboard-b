//
// Created by ori on 21/03/2021.
//

#include "Test.h"
#include<iostream>
#include "doctest.h"
#include "Direction.hpp"
#include "Board.hpp"
#include<string>

using namespace std;
using namespace ariel;
Board board;
TEST_CASE("first test"){
    CHECK(board.read(10,3, Direction::Horizontal, 0) == "");
    CHECK(board.read(5,2,Direction::Horizontal, 0) == "");
    CHECK(board.read(0,0,Direction::Vertical,0) == "");
    CHECK(board.read(10,3, Direction::Vertical, 0) == "");
    CHECK(board.read(5,2,Direction::Vertical, 0) == "");
    CHECK(board.read(6,6,Direction::Horizontal,0) == "a");
    CHECK(board.read(100, 200, Direction::Horizontal, 6) == "abc");
    CHECK(board.read(6,6,Direction::Horizontal,0) == "aaa");

}
TEST_CASE("second test"){
    CHECK(board.read(0,0,Direction::Horizontal,0) == "  ");
    CHECK(board.read(0, 2, Direction::Horizontal, 3) == "abc");
    CHECK(board.read(0, 1, Direction::Horizontal, 2) == "a");
    CHECK(board.read(0, 5, Direction::Horizontal, 3) == "bibi");

}
TEST_CASE("third test"){
    CHECK(board.read(5, 6, Direction::Horizontal, 2) == "bz");
    CHECK(board.read(3, 6, Direction::Horizontal, 2) == "_x");
    CHECK(board.read(6, 6, Direction::Horizontal, 3) == "_w_");
    CHECK(board.read(5, 7, Direction::Horizontal, 4) == "zde_");
    CHECK(board.read(2, 7, Direction::Vertical, 6) == "_xyz_");
    CHECK(board.read(5,7, Direction::Vertical, 1) == "z");
    CHECK(board.read(4, 6, Direction::Vertical, 3) == "_b_");
    CHECK(board.read(5, 9, Direction::Vertical, 2) == "e_");
}