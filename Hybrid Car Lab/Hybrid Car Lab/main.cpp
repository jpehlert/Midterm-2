//
//  main.cpp
//  Hybrid Car Lab
//
//  Created by Joey Ehlert on 9/12/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//


/*
 Joey Ehlert, Section 1, joey@ehlert.org
 
 Ready to Grade
 
 Purpose:
 Calculate cost of a hybrid and a non-hybrid car and output which one is better based on user's preference 
 
 Inputs:
 The estimated miles driven per year
 The estimated price of a gallon of gas during the 5 years of ownership
 The initial cost of a hybrid car
 The efficiency of the hybrid car in miles per gallon
 The estimated resale value (a dollar amount) for a hybrid after 5 years
 The initial cost of a non-hybrid car
 The efficiency of the non-hybrid car in miles per gallon
 The estimated resale value (a dollar amount) for a non-hybrid after 5 years
 The user's buying criterion, either minimized gas consumption or minimized total cost
 
 Outputs:
 A label indicating whether the car is Hybrid or Non-Hybrid
 The total gallons of fuel consumed over 5 years
 The total cost of owning the car for 5 years (fuel cost + depreciation in car value)
 A statement of which car is better based on user's criterion
 
 TEST CASES:
 
 Test case 1:
 The estimated miles driven per year: 30000
 The estimated price of a gallon of gas during the 5 years of ownership: 3.50
 The initial cost of a hybrid car: 35000
 The efficiency of the hybrid car in miles per gallon: 45
 The estimated resale value (a dollar amount) for a hybrid after 5 years: 25000
 The initial cost of a non-hybrid car: 25000
 The efficiency of the non-hybrid car in miles per gallon: 20
 The estimated resale value (a dollar amount) for a non-hybrid after 5 years: 18000
 The user's buying criterion, either minimized gas consumption or minimized total cost (enter Gas or Total): Total
 For the Hybrid Car:
 The total gallons of fuel consumed over 5 years: 3333.33
 The total cost of owning the car for 5 years: 21666.67
 For the Non-Hybrid Car:
 The total gallons of fuel consumed over 5 years: 7500.00
 The total cost of owning the car for 5 years: 33250.00
 ** The HYBRID car is better than the NON-HYBRID car when Total is the user's primary objective.**
 
 Test case 2: 
 The estimated miles driven per year: -50000
 Error: you must enter an integer bigger than 0.  Please try again.
 The estimated miles driven per year: 50000
 The estimated price of a gallon of gas during the 5 years of ownership: 3.17
 The initial cost of a hybrid car: 32000
 The efficiency of the hybrid car in miles per gallon: 52
 The estimated resale value (a dollar amount) for a hybrid after 5 years: 12000
 The initial cost of a non-hybrid car: 25000
 The efficiency of the non-hybrid car in miles per gallon: 27
 The estimated resale value (a dollar amount) for a non-hybrid after 5 years: 22000
 The user's buying criterion, either minimized gas consumption or minimized total cost (enter Gas or Total): Total
 For the Hybrid Car:
 The total gallons of fuel consumed over 5 years: 4807.69
 The total cost of owning the car for 5 years: 35240.38
 For the Non-Hybrid Car:
 The total gallons of fuel consumed over 5 years: 9259.26
 The total cost of owning the car for 5 years: 32351.85
 ** The NON-HYBRID car is better than the HYBRID car when Total is the user's primary objective.**
 
 Test case 3:
 The estimated miles driven per year: 10000
 The estimated price of a gallon of gas during the 5 years of ownership: 2.50
 The initial cost of a hybrid car: 25000
 The efficiency of the hybrid car in miles per gallon: 39
 The estimated resale value (a dollar amount) for a hybrid after 5 years: 0
 Error: you must enter an integer bigger than 0.  Please try again.
 The estimated resale value (a dollar amount) for a hybrid after 5 years: 18000
 The initial cost of a non-hybrid car: -4839
 Error: you must enter an integer bigger than 0.  Please try again.
 The initial cost of a non-hybrid car: 20000
 The efficiency of the non-hybrid car in miles per gallon: 22
 The estimated resale value (a dollar amount) for a non-hybrid after 5 years: -800000
 Error: you must enter an integer bigger than 0.  Please try again.
 The estimated resale value (a dollar amount) for a non-hybrid after 5 years: 12000
 The user's buying criterion, either minimized gas consumption or minimized total cost (enter Gas or Total): Gas
 For the Hybrid Car:
 The total gallons of fuel consumed over 5 years: 1282.05
 The total cost of owning the car for 5 years: 10205.13
 For the Non-Hybrid Car:
 The total gallons of fuel consumed over 5 years: 2272.73
 The total cost of owning the car for 5 years: 13681.82
 ** The HYBRID car is better than the NON-HYBRID car when Gas is the user's primary objective.**
 */



#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const int YEARS_OF_OWNERSHIP = 5;
    const string ERROR_MESSAGE = "Error: you must enter an integer bigger than 0.  Please try again. \n";
    
    //Estimated miles per year
    int miles_per_year = 0;
    cout << "The estimated miles driven per year: ";
    cin >> miles_per_year;
    
    //Error check on miles per year
    if (miles_per_year <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The estimated miles driven per year: ";
        cin >> miles_per_year;
    }
    
    //gas price
    double gas_price = 0;
    cout << "The estimated price of a gallon of gas during the 5 years of ownership: ";
    cin >> gas_price;
    
    //Error check on gas
    if (gas_price <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The estimated price of a gallon of gas during the 5 years of ownership: ";
        cin >> gas_price;
    }
    
    //hybrid cost
    int hybrid_initial_cost = 0;
    cout << "The initial cost of a hybrid car: ";
    cin >> hybrid_initial_cost;
    
   //Error check on hybrid initial cost
    if (hybrid_initial_cost <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The initial cost of a hybrid car: ";
        cin >> hybrid_initial_cost;
    }
    
    //efficiency of hybrid car
    double hybrid_efficiency = 0;
    cout << "The efficiency of the hybrid car in miles per gallon: ";
    cin >> hybrid_efficiency;
    
    //Error check on hybrid efficiency
    if (hybrid_efficiency <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The efficiency of the hybrid car in miles per gallon: ";
        cin >> hybrid_efficiency;
    }
    
    //resale of hybrid
    int hybrid_resale = 0;
    cout << "The estimated resale value (a dollar amount) for a hybrid after 5 years: ";
    cin >> hybrid_resale;
    
    //Error check on resale of hybrid
    if (hybrid_resale <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The estimated resale value (a dollar amount) for a hybrid after 5 years: ";
        cin >> hybrid_resale;
    }
    
    //non-hybrid initial cost
    int non_hybrid_initial_cost = 0;
    cout << "The initial cost of a non-hybrid car: ";
    cin >> non_hybrid_initial_cost;
    
    //Error check on non-hybrid initial cost
    if (non_hybrid_initial_cost <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The initial cost of a non-hybrid car: ";
        cin >> non_hybrid_initial_cost;
    }
    
    //non-hybrid efficiency
    double non_hybrid_efficiency = 0;
    cout << "The efficiency of the non-hybrid car in miles per gallon: ";
    cin >> non_hybrid_efficiency;
    
    //Error check on non_hybrid car
    if (non_hybrid_efficiency <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The efficiency of the non-hybrid car in miles per gallon: ";
        cin >> non_hybrid_efficiency;
    }
    
    //non_hybrid resale
    int non_hybrid_resale = 0;
    cout << "The estimated resale value (a dollar amount) for a non-hybrid after 5 years: ";
    cin >> non_hybrid_resale;
    
    //Error check on non-hybrid resale
    if (non_hybrid_resale <= 0)
    {
        cout << ERROR_MESSAGE;
        cout << "The estimated resale value (a dollar amount) for a non-hybrid after 5 years: ";
        cin >> non_hybrid_resale;
    }

    
    //Buyer criterion
    string criterion = "";
    cout << "The user\'s buying criterion, either minimized gas consumption or minimized total cost (enter Gas or Total): ";
    cin >> criterion;
    
    //function of total gallons consumed
    //First let's do the hybrid
    double hybrid_gallons = 0;
    hybrid_gallons = (miles_per_year * YEARS_OF_OWNERSHIP) / hybrid_efficiency;
    
    //now let's do the non-hybrid!
    double non_hybrid_gallons = 0;
    non_hybrid_gallons = (miles_per_year * YEARS_OF_OWNERSHIP) / non_hybrid_efficiency;
    
    
    //function of total cost
    //let's start with the hybrid again
    double hybrid_cost = 0;
    hybrid_cost = (hybrid_initial_cost - hybrid_resale) + (hybrid_gallons * gas_price);
    
    //and then the non-hybrid
    double non_hybrid_cost = 0;
    non_hybrid_cost = (non_hybrid_initial_cost - non_hybrid_resale) + (non_hybrid_gallons *gas_price);
    
    //report my findings for the hybrid
    cout << "For the Hybrid Car: \n"
    << "The total gallons of fuel consumed over 5 years: " << fixed << setprecision(2) << hybrid_gallons
    << "\nThe total cost of owning the car for 5 years: " << fixed << setprecision(2) << hybrid_cost << "\n";
    
    //report my findings for the non-hybrid
    cout << "For the Non-Hybrid Car: \n"
    << "The total gallons of fuel consumed over 5 years: " << fixed << setprecision(2) << non_hybrid_gallons
    << "\nThe total cost of owning the car for 5 years: " << fixed << setprecision(2) << non_hybrid_cost << "\n";
    
    
    //select car based on criterion
    if ((criterion == "Total" && hybrid_cost < non_hybrid_cost) || (criterion == "Gas" && hybrid_gallons < non_hybrid_gallons))
    {
        cout << "** The HYBRID car is better than the NON-HYBRID car when " << criterion << " is the user's primary objective.** \n";
    }
    else
    {
        cout << "** The NON-HYBRID car is better than the HYBRID car when " << criterion << " is the user's primary objective.** \n";
    }
    
    
    return 0;
}
