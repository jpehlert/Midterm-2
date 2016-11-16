//
//  main.cpp
//  Car Dealership Lab
//
//  Created by Joey Ehlert on 11/13/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include "Car.h"

int printMenu ()
{
    const int NUMBER_OF_MENU_OPTIONS = 8;
    int menu_select = 0;
    cout << "Please select which option you would like to choose: \n1 - Show Current Inventory \n2 - Show Current Balance \n3 - Buy a Car \n4 - Sell a Car \n5 - Paint a Car \n6 - Load File \n7 - Save File \n8 - Quit Program \n";
    cin >> menu_select;
    return menu_select;
}
int findCar (vector<Car> inventory, string& new_car)
{
    bool same_car = false;
    int car_placement = 0;
    cin.ignore(256, '\n');
    getline (cin, new_car);
    
    for (int i = 0; i < inventory.size(); i++)
    {
        string car_name = inventory[i].getName();
        if (car_name == new_car)
        {
            same_car = true;
            car_placement = i;
            break;
        }
    }
    if (same_car == true)
    {
        return car_placement;
    }
    else
    {
        return -1;
    }
}

void buyACar (double& current_balance, vector<Car>& inventory)
{
    string new_car_name, new_car_color = "";
    double new_car_price = 0;
    cout << "What is the name of the new car? ";
    cin.ignore(128, '\n');
    getline (cin, new_car_name);
    

    cout << "What is the color of the new car? ";
    cin >> new_car_color;
    
    
    cout << "What is the Price of the new car? ";
    cin >> new_car_price;
    
    Car new_car(new_car_name, new_car_color, new_car_price);
    
    int car_placement = findCar(inventory, new_car_name);
        
    if (car_placement != -1 || new_car_price > current_balance)
    {
        cout << "\nSorry you can't do that\n\n";
    }
    else
    {
        inventory.push_back(new_car);
        cout << "\nOk, the car has been purchased!\n\n";
        current_balance -= new_car_price;
    }
    
}

void sellACar (double& current_balance, vector<Car>& inventory)
{
    int inventory_size = inventory.size() - 1;
    string selling_car_name = "";
    cout << "What is the name of the new car? ";
    cin >> selling_car_name;
    
    int car_placement = findCar(inventory, selling_car_name);
    
    if (car_placement == -1)
    {
        cout << "That car doesn't exist\n\n";
    }
    else
    {
        current_balance += inventory[car_placement].getPrice();
        inventory[car_placement] = inventory[inventory_size];
        inventory.pop_back();
    }
}


void runMenu (vector<Car>& inventory)
{
    double current_balance = 10000;
    const int NUMBER_OF_MENU_OPTIONS = 8;
    int menu_select = printMenu();
    
    while (menu_select <= 0 || menu_select > NUMBER_OF_MENU_OPTIONS || cin.fail())
    {
        cin.clear();
        cout << "\nPLEASE ENTER A VALID SELECTION\n\n";
        cin.ignore(256,'\n');
        menu_select = printMenu();
    }
    while (menu_select > 0 && menu_select < NUMBER_OF_MENU_OPTIONS)
    {
        if (menu_select == 1)
        {
            for (int i = 0; i < inventory.size(); i++)
            {
                cout << inventory[i].toString();
            }
        }
        else if (menu_select == 2)
        {
            cout << fixed << setprecision(2) << current_balance << endl;
        }
        else if (menu_select == 3)
        {
            buyACar(current_balance, inventory);
        }
        else if (menu_select == 4)
        {
            sellACar(current_balance, inventory);
        }
        /*
         if elses in here
        
         */
        menu_select = printMenu();
    }
    if (menu_select == NUMBER_OF_MENU_OPTIONS)
    {
        cout << "\n\n\nQUITTING PROGRAM NOW...\n\n\n";
    }
    
}

int main ()
{
    vector<Car> inventory;
    runMenu( inventory);
    return 0;
}
