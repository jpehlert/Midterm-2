//
//  team.hpp
//  Midterm 2
//
//  Created by Joey Ehlert on 11/16/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

#ifndef team_hpp
#define team_hpp

#include <stdio.h>
#include <iomanip>
#include "BattingOrder.hpp"

using namespace std;

class Team
{
private:
    string team_name;
    int runs;
    double at_bats;
    double hits;
    double batting_average;
    BattingOrder batters;
    vector<string> batting_order;
    
    
public:
    Team (string name, vector<string> batting_order);
    virtual ~Team();
    
    void add_run();

    void add_hit();
    
    void add_at_bat();
    
    void advance_batter();
    
    void make_batting_substitution (string previous_player, string new_player);
    
    string get_name();
    
    void print_stats();
    
};
#endif /* team_hpp */
