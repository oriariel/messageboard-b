//
// Created by ori on 21/03/2021.
//

#include <iostream>
#include <vector>
#include "Direction.hpp"
#include <map>
#include<string>
using namespace std;
namespace ariel {
    class Board {
        unsigned int rows=0;
        unsigned int cols=0;
        std::map<unsigned int,map<unsigned , string>> m;

    public:
     
        void post(unsigned int rows, unsigned int cols, Direction d, string ans);
        string read(unsigned int rows, unsigned int cols, Direction d, unsigned int length);
        void show();
    };
}
