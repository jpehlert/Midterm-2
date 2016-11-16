/* 
 Joey Ehlert, Section 1, joey@ehlert.org
 
 Ready to grade
 
 Purpose: 
 Calculate number of various sizes of pizzas to buy
 Calculate total area of pizza, and total area each person can eat
 Calculate the total cost of the pizza, including the tip
 
 Inputs:
 Number of people eating
 The tip as an integer percentage (between 0 and 100) 
 
 Outputs:
 Number of large, medium and small pizzas to order
 The total area (in square inches) of pizza
 The total area (in square inches) of pizza each person can eat
 The total cost of the pizza, including tip (rounded to the nearest whole dollar)
 
 TEST CASES:
 
 Test 1:
 Input: 12 guests, 5% tip
 Output: 1 large, 1 medium, 2 small
 Area: 741.415
 Area/person: 61.7846
 $43
 
 Test 2:
 Input: 49 guests, 8% tip
 Output: 7 large
 Area: 2199.11
 Area/Person: 44.8799
 $111
 
 Test 3:
 Input: 18 guests, 10% tip
 Output: 2 large, 1 medium, 1 small
 Area: 942.477
 Area/person: 52.3598
 $53
 
 */
 

#include <iostream>
#include <cmath>

using namespace std;



int main() {
    
    //User input number of guests
    cout << "Number of Guests: ";
    
    int num_of_guests = 0;
    cin >> num_of_guests;
    
    //User input tip
    
    cout << "\nTip (percentage): ";
    
    int tip = 0;
    cin >> tip;
    
    
    //NUMBER OF PIZZAS
    //Declare constants and variables for number of pizzas
    const int NUM_PEOPLE_LG_PIZZA = 7;
    const int NUM_PEOPLE_MED_PIZZA = 3;
    const int NUM_PEOPLE_SM_PIZZA = 1;
    
    int num_lg_pizza = 0;
    int num_med_pizza = 0;
    int num_sm_pizza = 0;
    
    //Calculate the number of each type of pizza
    num_lg_pizza = num_of_guests / NUM_PEOPLE_LG_PIZZA;
    
    int leftover_guests = 0;
    leftover_guests = num_of_guests % NUM_PEOPLE_LG_PIZZA;
    num_med_pizza = leftover_guests / NUM_PEOPLE_MED_PIZZA;
    
    int more_leftover_guests = 0;
    more_leftover_guests = leftover_guests % NUM_PEOPLE_MED_PIZZA;
    num_sm_pizza = more_leftover_guests / NUM_PEOPLE_SM_PIZZA;
    
    
    //AREA OF PIZZAS
    //Declare constants and variables for the area of the pizza
    const double PI = 3.14159;
    
    const int RADIUS_LG_PIZZA = 10;
    const int RADIUS_MED_PIZZA = 8;
    const int RADIUS_SM_PIZZA = 6;
    
    double area_lg_pizza = 0;
    double area_med_pizza = 0;
    double area_sm_pizza = 0;
    double total_area = 0;
    
    //Calculate total area of pizza
    area_lg_pizza = PI * (RADIUS_LG_PIZZA * RADIUS_LG_PIZZA) * num_lg_pizza;
    area_med_pizza = PI * (RADIUS_MED_PIZZA * RADIUS_MED_PIZZA) * num_med_pizza;
    area_sm_pizza = PI * (RADIUS_SM_PIZZA * RADIUS_SM_PIZZA) * num_sm_pizza;
    total_area = area_sm_pizza + area_med_pizza + area_lg_pizza;
    
    //Calculate area per person
    double area_per_person = 0;
    area_per_person = total_area / num_of_guests;
    
    
    //COST
    //Declare price constants and variables
    const double COST_LG_PIZZA = 14.68;
    const double COST_MED_PIZZA = 11.48;
    const double COST_SM_PIZZA = 7.28;
    
    double cost_pizza = 0;
    double cost_tip = 0;
    int total_cost = 0;
    
    //Calculate the cost
    cost_pizza = (num_lg_pizza * COST_LG_PIZZA) +
    (num_med_pizza * COST_MED_PIZZA) + (num_sm_pizza * COST_SM_PIZZA);
    
    //100.0 for finding percent
    cost_tip = cost_pizza * (tip / 100.0);
    
    //0.5 for rounding
    total_cost = int ((cost_pizza + cost_tip) + 0.5);
    
    
    //REPORTING
    //Report the number of each type of pizza
    cout << num_lg_pizza << " Large pizzas\n" << num_med_pizza <<
    " Medium pizzas\n" << num_sm_pizza << " Small pizzas\n";
    
    //Report area of pizza
    cout << total_area << " Sq Inches\n";
    cout << area_per_person << " Sq Inches per person\n";
    
    //Report cost of pizza
    cout << "$" << total_cost << "\n";
    
    return 0;
}










