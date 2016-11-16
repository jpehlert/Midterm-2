//
//  BattingOrder.hpp
//  Midterm 2
//
//  Created by Joey Ehlert on 11/16/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

#ifndef BattingOrder_hpp
#define BattingOrder_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

class BattingOrder
{
public:
    BattingOrder(vector<string> batting_order);
    void make_substituion(string previous_player, string new_player);
    
    void advance_batter();
    
    string get_current_batter();
    
    void print_batting_order();
    
private:
    vector<string> batting_order;
    int pos_batter; // keep track of which batter is batting
    
};
#endif /* BattingOrder_hpp */
