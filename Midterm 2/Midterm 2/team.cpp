//
//  team.cpp
//  Midterm 2
//
//  Created by Joey Ehlert on 11/16/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

#include "team.hpp"
using namespace std;


Team::Team(string name, vector<string> batting_order)
    : batters(batting_order)
{
    team_name = name;
    runs = 0;
    at_bats = 0;
    hits = 0;
    batting_average = 0;
}

Team::~Team(){}

void Team:: add_run()
{
    runs ++;
}

void Team:: add_hit()
{
    hits ++;
}

void Team:: add_at_bat()
{
    at_bats ++;
}

void Team::advance_batter()
{
    batters.advance_batter();
}

void Team:: make_batting_substitution(string previous_player, string new_player)
{
    batters.make_substituion(previous_player, new_player);
}

string Team:: get_name()
{
    return team_name;
}

void Team:: print_stats()
{
    if (at_bats > 0)
    {
        batting_average = hits / at_bats;
    }
    
    cout << "Team Name: " << team_name << endl;
    cout << "Runs: " << runs << endl;
    cout << "Batting Average: " << fixed << setprecision(3) << batting_average << endl;
    cout << "Batting Order: ";
    batters.print_batting_order();
    cout << endl;
    cout << "Up to Bat: " << batters.get_current_batter() << endl;
}
