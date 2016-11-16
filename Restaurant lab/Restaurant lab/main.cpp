//
//  main.cpp
//  Restaurant lab
//
//  Created by Joey Ehlert on 10/28/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//
/*
 Joey Ehlert, Section 1, joey@ehlert.org
 Ready to grade
 
 Purpose: choose a restaurant to go to based on 1 on 1 match ups
 
 Inputs:
 A menu selection (1 - 6)
 Restaurant (either to be taken out of the list, or to be added into the list)
 Once the restaurants are battling, select a restaurant that you want (1 or 2)
 
 Outputs:
 a menu to select from
 a display of restaurants currently in the list
 reasons why inputs were erroneous 
 Two restaurants to choose from during the tournament
 the winner of the tournament based on your decisions
 
 TESTS
 Case 1:
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 0
 
 PLEASE ENTER A VALID MENU SELECTION
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): -1
 
 PLEASE ENTER A VALID MENU SELECTION
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 7
 
 PLEASE ENTER A VALID MENU SELECTION
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 1
 Mcdonalds, KFC, Taco Bell, Chick Fil A, Subway, Panera, Cafe Rio, JCW's
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 6
 Quitting program now...
 
 
 Case 2:
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 2
 What is the name of the restaurant that you would like to add? Chipotle
 Your restaurant has been added to the list!
 
 Mcdonalds, KFC, Taco Bell, Chick Fil A, Subway, Panera, Cafe Rio, JCW's, Chipotle
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 2
 What is the name of the restaurant that you would like to add? Burger King
 Your restaurant has been added to the list!
 
 Mcdonalds, KFC, Taco Bell, Chick Fil A, Subway, Panera, Cafe Rio, JCW's, Chipotle, Burger King
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 2
 What is the name of the restaurant that you would like to add? Chipotle
 Sorry, that restaurant is already in your list
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 1
 Mcdonalds, KFC, Taco Bell, Chick Fil A, Subway, Panera, Cafe Rio, JCW's, Chipotle, Burger King
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 5
 
 You need to change the number of restaurants so that it is a power of 2!
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 3
 What is the name of the restaurant that you would like to remove? Mcdonalds
 Your restaurant has been removed!
 Burger King, KFC, Taco Bell, Chick Fil A, Subway, Panera, Cafe Rio, JCW's, Chipotle
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 3
 What is the name of the restaurant that you would like to remove? Chick Fil A
 Your restaurant has been removed!
 Burger King, KFC, Taco Bell, Chipotle, Subway, Panera, Cafe Rio, JCW's
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 5
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Burger King
 OR
 2 - KFC
 2
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Taco Bell
 OR
 2 - Chipotle
 3
 
 Please enter a valid selection
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Taco Bell
 OR
 2 - Chipotle
 Hi
 
 Please enter a valid selection
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Taco Bell
 OR
 2 - Chipotle
 1
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Subway
 OR
 2 - Panera
 0
 
 Please enter a valid selection
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Subway
 OR
 2 - Panera
 1
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Cafe Rio
 OR
 2 - JCW's
 2
 
 These are the restaurants remaining in your tournament:
 KFC, Taco Bell, Subway, JCW's
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - KFC
 OR
 2 - Taco Bell
 2
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Subway
 OR
 2 - JCW's
 1
 
 These are the restaurants remaining in your tournament:
 Taco Bell, Subway
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Taco Bell
 OR 
 2 - Subway
 2
 
 These are the restaurants remaining in your tournament: 
 Subway
 And the winner of the tournament is....... 
 Subway
 
 
 Case 3:
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): Hello
 
 PLEASE ENTER A VALID MENU SELECTION
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 1
 Mcdonalds, KFC, Taco Bell, Chick Fil A, Subway, Panera, Cafe Rio, JCW's
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 4
 Cafe Rio, Chick Fil A, Subway, Panera, Mcdonalds, Taco Bell, JCW's, KFC
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 4
 Subway, Panera, Mcdonalds, KFC, Chick Fil A, Taco Bell, JCW's, Cafe Rio
 
 Menu for restaurant decisions
 1 - Display all restaurants
 2 - Add a restaurant
 3 - Remove a restaurant
 4 - Shuffle the vector
 5 - Begin the tournament
 6 - Quit the Program
 Please select an option (1-6): 5
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Subway
 OR
 2 - Panera
 2
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Mcdonalds
 OR
 2 - KFC
 1
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Chick Fil A
 OR
 2 - Taco Bell
 1
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - JCW's
 OR
 2 - Cafe Rio
 1
 
 These are the restaurants remaining in your tournament:
 Panera, Mcdonalds, Chick Fil A, JCW's
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Panera
 OR
 2 - Mcdonalds
 2
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Chick Fil A
 OR
 2 - JCW's
 2
 
 These are the restaurants remaining in your tournament:
 Mcdonalds, JCW's
 
 Please select one of the following restaurants that you would like to go to(1 or 2):
 1 - Mcdonalds
 OR
 2 - JCW's
 1
 
 These are the restaurants remaining in your tournament:
 Mcdonalds
 And the winner of the tournament is....... 
 Mcdonalds
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

//initialize restaurant vector
void initializeRestaurants(vector<string>& restaurants)
{
    restaurants.push_back("Mcdonalds");
    restaurants.push_back("KFC");
    restaurants.push_back("Taco Bell");
    restaurants.push_back("Chick Fil A");
    restaurants.push_back("Subway");
    restaurants.push_back("Panera");
    restaurants.push_back("Cafe Rio");
    restaurants.push_back("JCW\'s");
}

//print menu
int printMenu ()
{
    int menu_select;
    const string MENU_STRING = "\nMenu for restaurant decisions \n1 - Display all restaurants \n2 - Add a restaurant \n3 - Remove a restaurant \n4 - Shuffle the vector \n5 - Begin the tournament \n6 - Quit the Program";
    cout << MENU_STRING << "\nPlease select an option (1-6): ";
    cin >> menu_select;
    return menu_select;
}

//displaying all restaurants
void displayRestaurants (vector<string> restaurants)
{
    for (int i = 0; i < restaurants.size(); i++)
    {
        if (i < restaurants.size() - 1)
        {
            cout << restaurants[i] <<  ", ";
        }
        else
        {
            cout << restaurants[i];
        }
    }
    cout << endl;
}

int findRestaurant (vector<string> restaurants, string& new_restaurant)
{
    bool same_restaurant = false;
    int restaurant_placement = 0;
    cin.ignore(256, '\n');
    getline (cin, new_restaurant);
    
    for (int i = 0; i < restaurants.size(); i++)
    {
        if (restaurants[i] == new_restaurant)
        {
            same_restaurant = true;
            restaurant_placement = i;
            break;
        }
    }
    if (same_restaurant == true)
    {
        return restaurant_placement;
    }
    else
    {
        return -1;
    }
}

//add a restaurant to the vector
void addRestaurant (vector<string>& restaurants)
{
    string new_restaurant;
    int restaurant_placement;
    cout << "What is the name of the restaurant that you would like to add? ";
    restaurant_placement = findRestaurant(restaurants, new_restaurant);
    
    if (restaurant_placement == -1)
    {
        restaurants.push_back(new_restaurant);
        cout << "Your restaurant has been added to the list!\n\n";
        displayRestaurants(restaurants);
    }
    else
    {
        cout << "Sorry, that restaurant is already in your list\n";
    }
}

//remove a restaurant from the vector
void removeRestaurant (vector<string>& restaurants)
{
    string removing_restaurant;
    cout << "What is the name of the restaurant that you would like to remove? ";
    int restaurant_placement = findRestaurant(restaurants, removing_restaurant);
    
    if (restaurant_placement == -1)
    {
        cout << "That restaurant isn't even on the list!\n\n";
    }
    else
    {
        restaurants[restaurant_placement] = restaurants[restaurants.size() - 1];
        restaurants.pop_back();
        cout << "Your restaurant has been removed!\n";
        displayRestaurants(restaurants);
    }
}

//function for shuffling the vector
void shuffleRestaurants (vector<string>& restaurants)
{
    int num_iterations = restaurants.size() * 10; //just use as how many times this loop should iterate.  Shuffles more of the vector than a specific number
    for (int i = 0; i <= num_iterations; i++)
    {
        int first_index = rand() % restaurants.size();
        int second_index = rand() % restaurants.size();
        while (first_index == second_index) //this way it won't waste time and energy trying to switch the same one around
        {
            second_index = rand() % restaurants.size();
        }
        restaurants.push_back("temporary");//create a temporary placeholder at the end of the vector
        int last_index = (restaurants.size() - 1);
        restaurants[last_index] = restaurants[first_index]; //assign placeholder to the value of the first one
        restaurants[first_index] = restaurants[second_index];//assign second back to first
        restaurants[second_index] = restaurants[last_index]; //assign the first (which was stored at the end) to the second
        restaurants.pop_back();
    }
    displayRestaurants(restaurants);
}

//check if the number of restaurants is 2^n
int checkNumberRestaurants (vector<string> restaurants)
{
    int tournament_ready = 0;
    double tournament_positions = restaurants.size();
    while (tournament_positions > 1)
    {
        tournament_positions = tournament_positions / 2.0;
        tournament_ready++;
    }
    if (tournament_positions != 1)
    {
        tournament_ready = -1;
    }
    
    return tournament_ready;
}

//function for choosing restaurants
void chooseRestaurant (vector<string>& restaurants)
{
    int restaurant_selected = 0;
    for (int i = 0; i < restaurants.size(); i++)
    {
        cout << "\nPlease select one of the following restaurants that you would like to go to(1 or 2): \n1 - "
        << restaurants[i] << "\nOR \n2 - " << restaurants[i + 1] << endl;
        cin >> restaurant_selected;
        while ((restaurant_selected != 1 && restaurant_selected != 2) || cin.fail())
        {
            cin.clear();
            cout << "\nPlease enter a valid selection \nPlease select one of the following restaurants that you would like to go to(1 or 2): \n1 - "
            << restaurants[i] << "\nOR \n2 - " << restaurants[i + 1] << endl;
            cin.ignore(256, '\n');
            cin >> restaurant_selected;
        }
        
        if (restaurant_selected == 1)
        {
            //winning_restaurants[i] = i;
            for (int j = i + 1; j < restaurants.size(); j++)
            {
                restaurants[j] = restaurants[j + 1];
            }
            restaurants.pop_back();
        }
        else if (restaurant_selected == 2)
        {
            //winning_restaurants[i] = i + 1;
            restaurants[i] = restaurants[i + 1];
            for (int j = i + 1; j < restaurants.size(); j++)
            {
                restaurants [j - 1] = restaurants[j];
            }
            restaurants.pop_back();
        }
        restaurant_selected = 0; //reset to 0
    }
}

//function for battling restaurants
int battleRestaurants (vector<string> restaurants)
{
    string winner = "";
    int tournament_ready = checkNumberRestaurants(restaurants);
    if (tournament_ready == -1)
    {
        cout << "\nYou need to change the number of restaurants so that it is a power of 2!\n";
        return -1;
    }
    else
    {
        for (int i = 0; i < tournament_ready; i ++)
        {
            chooseRestaurant(restaurants);
            cout << "\nThese are the restaurants remaining in your tournament: \n";
            displayRestaurants(restaurants);
        }
        winner = restaurants[0];
        cout << "And the winner of the tournament is....... \n" << winner << endl;
        return 0;
    }
}
    

//basic running of the menu
void runMenu (int& menu_select, vector<string>& restaurants)
{
    
    while (menu_select <= 0 || menu_select > 6 || cin.fail())
    {
        cin.clear();
        cout << "\nPLEASE ENTER A VALID MENU SELECTION \n";
        cin.ignore(256, '\n');
        menu_select = printMenu();
    }
    
    while (menu_select > 0 && menu_select < 6)
    {
        
        if (menu_select == 1)
        {
            displayRestaurants(restaurants);
        }
        else if (menu_select == 2)
        {
            addRestaurant(restaurants);
        }
        else if (menu_select == 3)
        {
            removeRestaurant(restaurants);
        }
        else if (menu_select == 4)
        {
            shuffleRestaurants(restaurants);
        }
        else if (menu_select == 5)
        {
            int program_end = battleRestaurants(restaurants);
            if (program_end == 0)
            {
                break;
            }
        }
        menu_select = printMenu();
    }
    if (menu_select == 6)
    {
        cout << "Quitting program now...\n";
    }
}

int main ()
{
    srand(time(0));
    vector<string> restaurants;
    initializeRestaurants(restaurants);
    int menu_select = printMenu();
    runMenu(menu_select, restaurants);
    return 0;
}







