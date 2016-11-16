//
//  BattingOrder.cpp
//  Midterm 2
//
//  Created by Joey Ehlert on 11/16/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

#include "BattingOrder.hpp"
using namespace std;


BattingOrder::BattingOrder(vector<string> this_batting_order) //I needed a different name
{
    batting_order = this_batting_order;
    pos_batter = 0;
}


void BattingOrder:: make_substituion(string previous_player, string new_player)
{
    int player_position = 0;
    for (int i = 0; i < batting_order.size(); i++)
    {
        if (batting_order[i] == previous_player)
        {
            player_position = i;
            break;
        }
    }
    batting_order[player_position] = new_player;
}

void BattingOrder:: advance_batter()
{
    pos_batter++;
    if (pos_batter == 9)
    {
        pos_batter = 0;
    }
}

string BattingOrder:: get_current_batter()
{
    string current_batter;
    current_batter = batting_order[pos_batter];
    return current_batter;
}

void BattingOrder::print_batting_order()
{
    const int BATTING_ORDER_SIZE = 9;
    stringstream ss;
    for (int i = 0; i < BATTING_ORDER_SIZE; i++)
    {
        if (i == BATTING_ORDER_SIZE - 2)
        {
            ss << batting_order[i];
        }
        else
        {
            ss << batting_order[i] << ", ";
        }
    }
    cout << ss.str();
}
