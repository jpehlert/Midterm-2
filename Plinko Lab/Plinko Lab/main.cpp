//
//  main.cpp
//  Plinko Lab
//
//  Created by Joey Ehlert on 9/28/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

/*
 Joey Ehlert, Section 1, joey@ehlert.org
 
 Ready to be graded
 
 Purpose: Simulate a simple game of plinko
 
 Inputs:
 Select an option based on the menu presented (0, 1, 2)
 If single chip is selected, requires the slot in which you desire to drop your chip
 If multiple chips is selected, requires number of chips wanted to drop, as well as the slot to drop all your chips in
 
 Outputs:
 For quit option:
    "Quitting game now" and then exits the program
 
 For single chip option:
    WITHOUT ERRORS:
        The path of the chip as it falls (in terms of which slot it is above)
        The winnings received for this chip
    IF AN ERROR OCCURS:
        States why the input was invalid, and immediately returns the user to the menu
 
 For multiple chip option:
    WITHOUT ERRORS:
        Reports the Total winnings
        Reports the average winnings per chip (to the nearest penny)
    IF AN ERROR OCCURS:
        States why the input was invalid, and immediately returns the user to the menu
 
 Test Cases:
 TEST 1:
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: -1
 INVALID SELECTION.  Please enter 0, 1, 2
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 3
 INVALID SELECTION.  Please enter 0, 1, 2
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 1
 *** DROP SINGLE CHIP ***
 Which slot would you like to drop the chip in (0-8)? 3
 DROPPING CHIP IN SLOT 3
 PATH: [3.0 3.5 4.0 4.5 4.0 4.5 5.0 4.5 4.0 4.5 4.0 3.5 4.0]
 WINNINGS: $10000
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 1
 *** DROP SINGLE CHIP ***
 Which slot would you like to drop the chip in (0-8)? 0
 DROPPING CHIP IN SLOT 0.0
 PATH: [0.0 0.5 0.0 0.5 0.0 0.5 0.0 0.5 1.0 0.5 0.0 0.5 1.0]
 WINNINGS: $500
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 0
 Quitting program now...
 
 
 
 
 TEST 2:
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? -10
 INVALID NUMBER OF CHIPS.
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? 438
 Which slot would you like to drop the chips in (0-8)? -1
 INVALID SLOT.
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? 1923
 Which slot would you like to drop the chips in (0-8)? 4
 TOTAL WINNINGS: $4942000.00
 AVERAGE WINNINGS PER CHIP: $2569.94
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 0
 Quitting program now...
 
 
 
 TEST 3:
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? 0
 INVALID NUMBER OF CHIPS.
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 12
 INVALID SELECTION.  Please enter 0, 1, 2
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 1
 *** DROP SINGLE CHIP ***
 Which slot would you like to drop the chip in (0-8)? 8
 DROPPING CHIP IN SLOT 8
 PATH: [8.0 7.5 8.0 7.5 8.0 7.5 7.0 7.5 7.0 7.5 8.0 7.5 7.0]
 WINNINGS: $500
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? 10000
 Which slot would you like to drop the chips in (0-8)? 6
 TOTAL WINNINGS: $15934200.00
 AVERAGE WINNINGS PER CHIP: $1593.42
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? 1
 Which slot would you like to drop the chips in (0-8)? 2
 TOTAL WINNINGS: $1000.00
 AVERAGE WINNINGS PER CHIP: $1000.00
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 Enter your selection now: 0
 Quitting program now...
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    //initialize constants
    const string MENUSTRING = "\nMENU: Please select one of the following options: \n0 - Quit the program \n1 - Drop a single chip into one slot \n2 - Drop multiple chips into one slot \nEnter your selection now: ";
    const string MENUERROR = "INVALID SELECTION.  Please enter 0, 1, 2 \n";
    const string SLOTERROR = "INVALID SLOT. \n";
    const string CHIPERROR = "INVALID NUMBER OF CHIPS. \n";
    
    //money for each slot
    const int SLOTZERO = 100.0; //also works for slot 8
    const int SLOTONE = 500.0; // also works for slot 7
    const int SLOTTWO = 1000.0; // also works for slot 6
    const int SLOTTHREE = 0.0; // also works for slot 5
    const int SLOTFOUR = 10000.0;
    
    
    srand(time(0));
    
    //print the menu
    cout << MENUSTRING;
    
    int menu_select = 0;
    cin >> menu_select;
    
    //error check for menu
    while (menu_select < 0 || menu_select > 2)
    {
        cout << MENUERROR << MENUSTRING;
        cin >> menu_select;
    }
    
    //bool for whether or not there is an error
    bool isInvalid = true;
    
    while (menu_select != 0)
    {
        //single chip drop
        if (menu_select == 1)
        {
            cout << "*** DROP SINGLE CHIP *** \nWhich slot would you like to drop the chip in (0-8)? ";
            double initial_drop = 0;
            cin >> initial_drop;
            int fin_pos = 0;
            
            
            
            //call on bool. if it is false, the menu will print
            if (initial_drop < 0 || initial_drop > 8)
            {
                isInvalid = false;
            }
            
            
            if (isInvalid == true)
            {
                cout << "DROPPING CHIP IN SLOT " << initial_drop;
                
                //giving the chip a path and printing it
                cout << "\nPATH: [" << fixed << setprecision(1) << initial_drop;
                for (int i = 0; i <= 11; i++)
                {
                    //keep the chip on the board
                    if (initial_drop == 0.0)
                    {
                        initial_drop += 0.5;
                    }
                    else if (initial_drop == 8.0)
                    {
                        initial_drop -= 0.5;
                    }
                    //move the chip if not on the edge
                    else if (rand() % 2 == 0)
                    {
                        initial_drop -= 0.5;
                    }
                    else
                    {
                        initial_drop += 0.5;
                    }
                    //print out the path
                    cout << " " << fixed << setprecision(1) << initial_drop;
                    fin_pos = initial_drop;
                }
                
                //print out the winnings based on the final position
                cout << "]\nWINNINGS: $";
            
                if (fin_pos == 0 || fin_pos == 8)
                {
                    cout << SLOTZERO;
                }
                else if (fin_pos == 1 || fin_pos == 7)
                {
                    cout << SLOTONE;
                }
                else if (fin_pos == 2 || fin_pos == 6)
                {
                    cout << SLOTTWO;
                }
                else if (fin_pos == 3 || fin_pos == 5)
                {
                    cout << SLOTTHREE;
                }
                else if (fin_pos == 4)
                {
                    cout << SLOTFOUR;
                }
                
                cout << "\n";
            }
            else
            {
                cout << SLOTERROR;
                isInvalid = true;
            }
        }
        
        
        //bowl of chips
        else if (menu_select == 2)
        {
            //number of chips to input
            cout << "*** DROP MULTIPLE CHIPS *** \nHow many chips would you like to drop ( > 0)? ";
            int number_of_chips = 0;
            cin >> number_of_chips;
            
            //error check for number of chips input
            if (number_of_chips < 1)
            {
                isInvalid = false;
            }
            
            if (isInvalid == true)
            {
                //slot input
                cout << "Which slot would you like to drop the chips in (0-8)? ";
                double initial_drop = 0;
                cin >> initial_drop;
                double chip_placement = initial_drop;
                int fin_pos = 0;

                //error check on slot input
                if (initial_drop < 0 || initial_drop > 8)
                {
                    isInvalid = false;
                }
                
                if (isInvalid == true)
                {
                    //declare winnings variables
                    double total_winnings = 0;
                    double ave_winnings = 0;
                    
                    //determine the endpoint of the chip,
                    for (int chip = 1; chip <= number_of_chips; chip++)
                    {
                        for (int i = 0; i <= 11; i++)
                        {
                            if (initial_drop == 0.0)
                            {
                                initial_drop += 0.5;
                            }
                            else if (initial_drop == 8.0)
                            {
                                initial_drop -= 0.5;
                            }
                            else if (rand() % 2 == 0)
                            {
                                initial_drop -= 0.5;
                            }
                            else
                            {
                                initial_drop += 0.5;
                            }
                        }
                        fin_pos = initial_drop;
                        
                        //reset the initial drop to original value
                        initial_drop = chip_placement;
                        
                        
                        //add winnings based on final position to total
                        
                        if (fin_pos == 0 || fin_pos == 8)
                        {
                            total_winnings += SLOTZERO;
                        }
                        else if (fin_pos == 1 || fin_pos == 7)
                        {
                            total_winnings += SLOTONE;
                        }
                        else if (fin_pos == 2 || fin_pos == 6)
                        {
                            total_winnings += SLOTTWO;
                        }
                        else if (fin_pos == 3 || fin_pos == 5)
                        {
                            total_winnings += SLOTTHREE;
                        }
                        else if (fin_pos == 4)
                        {
                            total_winnings += SLOTFOUR;
                        }
                        
                    }
                    //print out total and average winnings
                    ave_winnings = total_winnings / number_of_chips;
                    cout << "TOTAL WINNINGS: $" << fixed << setprecision(2) << total_winnings
                    << "\nAVERAGE WINNINGS PER CHIP: $" << fixed << setprecision(2) << ave_winnings << "\n";
                    
                    //reassign all variables to 0 for next time this option is selected
                    ave_winnings = 0;
                    total_winnings = 0;
                }
                else
                {
                    cout << SLOTERROR;
                    isInvalid = true;
                }
            }
            else
            {
                cout << CHIPERROR;
                isInvalid = true;
            }
            
        }
        
        
        //reprint the menu
        cout << MENUSTRING;
        
        cin >> menu_select;
        
        //error check for menu
        while (menu_select < 0 || menu_select > 2)
        {
            cout << MENUERROR << MENUSTRING;
            cin >> menu_select;
        }
        
        //quit program
        if (menu_select == 0)
        {
            cout << "Quitting program now... \n";
            return 0;
        }
        
    }
    
    
    
    return 0;
}



