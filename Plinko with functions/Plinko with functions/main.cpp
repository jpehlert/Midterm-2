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
 
 
 TESTS
 Case 1:
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: -1
 INVALID SELECTION.  Please enter 0, 1, 2, 3
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 4
 INVALID SELECTION.  Please enter 0, 1, 2, 3
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 1
 *** DROP SINGLE CHIP ***
 Which slot would you like to drop the chip in (0-8)? -1
 Please enter a valid slot (0-8): i
 Please enter a valid slot (0-8): L
 Please enter a valid slot (0-8): 6
 DROPPING CHIP IN SLOT 6
 PATH: [6.0 5.500000, 6.000000, 6.500000, 6.000000, 6.500000, 7.000000, 7.500000, 7.000000, 7.500000, 7.000000, 7.500000, 7.000000]
 WINNINGS: $500.0
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 0
 Quitting program now...
 
 
 Case 2:
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? i
 Please enter a valid number of chips ( > 0): a
 Please enter a valid number of chips ( > 0): -1
 Please enter a valid number of chips ( > 0): 999
 Which slot would you like to drop the chip in (0-8)? 9
 Please enter a valid slot (0-8): -1
 Please enter a valid slot (0-8): 4
 TOTAL WINNINGS: $2623800.00
 AVERAGE WINNINGS PER CHIP: $2626.43
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 2
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? 10000
 Which slot would you like to drop the chip in (0-8)? 8
 TOTAL WINNINGS: $7579100.00
 AVERAGE WINNINGS PER CHIP: $757.91
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 0
 Quitting program now...
 
 
 Case 3:
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 3
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? -1
 Please enter a valid number of chips ( > 0): 10000
 
 Winnings for Slot 0: $7.8999e+06
 Average Winnings for Slot 0: $789.99
 
 Winnings for Slot 1: $1.02739e+07
 Average Winnings for Slot 1: $1027.39
 
 Winnings for Slot 2: $1.56864e+07
 Average Winnings for Slot 2: $1568.64
 
 Winnings for Slot 3: $2.2704e+07
 Average Winnings for Slot 3: $2270.4
 
 Winnings for Slot 4: $2.54837e+07
 Average Winnings for Slot 4: $2548.37
 
 Winnings for Slot 5: $2.25556e+07
 Average Winnings for Slot 5: $2255.56
 
 Winnings for Slot 6: $1.61142e+07
 Average Winnings for Slot 6: $1611.42
 
 Winnings for Slot 7: $9.6725e+06
 Average Winnings for Slot 7: $967.25
 
 Winnings for Slot 8: $8.02e+06
 Average Winnings for Slot 8: $802
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 3
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? 10
 
 Winnings for Slot 0: $4700
 Average Winnings for Slot 0: $470
 
 Winnings for Slot 1: $13300
 Average Winnings for Slot 1: $1330
 
 Winnings for Slot 2: $13200
 Average Winnings for Slot 2: $1320
 
 Winnings for Slot 3: $12500
 Average Winnings for Slot 3: $1250
 
 Winnings for Slot 4: $3100
 Average Winnings for Slot 4: $310
 
 Winnings for Slot 5: $24500
 Average Winnings for Slot 5: $2450
 
 Winnings for Slot 6: $4500
 Average Winnings for Slot 6: $450
 
 Winnings for Slot 7: $2200
 Average Winnings for Slot 7: $220
 
 Winnings for Slot 8: $5200
 Average Winnings for Slot 8: $520
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 3
 *** DROP MULTIPLE CHIPS ***
 How many chips would you like to drop ( > 0)? j
 Please enter a valid number of chips ( > 0): a
 Please enter a valid number of chips ( > 0): 99
 
 Winnings for Slot 0: $87000
 Average Winnings for Slot 0: $878.788
 
 Winnings for Slot 1: $70100
 Average Winnings for Slot 1: $708.081
 
 Winnings for Slot 2: $177000
 Average Winnings for Slot 2: $1787.88
 
 Winnings for Slot 3: $249500
 Average Winnings for Slot 3: $2520.2
 
 Winnings for Slot 4: $266500
 Average Winnings for Slot 4: $2691.92
 
 Winnings for Slot 5: $222900
 Average Winnings for Slot 5: $2251.52
 
 Winnings for Slot 6: $173800
 Average Winnings for Slot 6: $1755.56
 
 Winnings for Slot 7: $116900
 Average Winnings for Slot 7: $1180.81
 
 Winnings for Slot 8: $120200
 Average Winnings for Slot 8: $1214.14
 
 MENU: Please select one of the following options:
 0 - Quit the program
 1 - Drop a single chip into one slot
 2 - Drop multiple chips into one slot
 3 - Sequentially drop multiple chips
 Enter your selection now: 0
 Quitting program now... 
  */

#include <iostream>
#include <iomanip>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <tuple>

using namespace std;

//compute winnings based on final position of chip
double computeWinnings (int fin_pos)
{
    //money for each slot
    const int SLOTZERO = 100.0; //also works for slot 8
    const int SLOTONE = 500.0; // also works for slot 7
    const int SLOTTWO = 1000.0; // also works for slot 6
    const int SLOTTHREE = 0.0; // also works for slot 5
    const int SLOTFOUR = 10000.0;
    
    double winnings;
    
    if (fin_pos == 0 || fin_pos == 8)
    {
        winnings = SLOTZERO;
    }
    else if (fin_pos == 1 || fin_pos == 7)
    {
        winnings = SLOTONE;
    }
    else if (fin_pos == 2 || fin_pos == 6)
    {
        winnings = SLOTTWO;
    }
    else if (fin_pos == 3 || fin_pos == 5)
    {
        winnings = SLOTTHREE;
    }
    else if (fin_pos == 4)
    {
        winnings = SLOTFOUR;
    }
    return winnings;
}

//for any single chip
int oneChip (double initial_drop, string& path)
{
    int fin_pos;
    double winnings;
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
        path.append(to_string(initial_drop));
        if (i < 11)
        {
            path.append(", ");
        }
    }
    fin_pos = initial_drop;
    winnings = computeWinnings(fin_pos);
    
    return winnings;
}

int multipleChips (double initial_drop, int number_of_chips)
{
    //declare winnings variables
    double total_winnings = 0;
    string path;
    int chip_placement = initial_drop;
    
    //determine the endpoint of the chip,
    for (int chip = 1; chip <= number_of_chips; chip++)
    {
        total_winnings += oneChip(initial_drop, path);
        
        //reset the initial drop to original value
        initial_drop = chip_placement;
        
    }

    return total_winnings;
}


double getSlotNumber ()
{
    cout << "Which slot would you like to drop the chip in (0-8)? ";
    double initial_drop = 0;
    cin >> initial_drop;
    
    while (initial_drop < 0 || initial_drop > 8 || cin.fail())
    {
        cin.clear();
        cout << "Please enter a valid slot (0-8): ";
        cin.ignore(256, '\n');
        cin >> initial_drop;
    }
    
    return initial_drop;
}

                
int getChipNumber ()
{
    //number of chips to input
    int number_of_chips = 0;
    cout << "*** DROP MULTIPLE CHIPS *** \nHow many chips would you like to drop ( > 0)? ";
    cin >> number_of_chips;
    
    while (number_of_chips <= 0 || cin.fail())
    {
        cin.clear();
        cout << "Please enter a valid number of chips ( > 0): ";
        cin.ignore(256, '\n');
        cin >> number_of_chips;
    }

    return number_of_chips;
}



int main ()
{
    //initialize constants
    const string MENUSTRING = "\nMENU: Please select one of the following options: \n0 - Quit the program \n1 - Drop a single chip into one slot \n2 - Drop multiple chips into one slot \n3 - Sequentially drop multiple chips\nEnter your selection now: ";
    const string MENUERROR = "INVALID SELECTION.  Please enter 0, 1, 2, 3 \n";

    
    
    srand(time(0));
    
    //print the menu
    cout << MENUSTRING;
    
    int menu_select = 0;
    cin >> menu_select;
    
    //error check for menu
    while (menu_select < 0 || menu_select > 3 || cin.fail())
    {
        cout << MENUERROR << MENUSTRING;
        cin >> menu_select;
    }
    
    while (menu_select != 0)
    {
        //single chip drop
        if (menu_select == 1)
        {
            cout << "*** DROP SINGLE CHIP *** \n";
            double initial_drop = getSlotNumber();
        
            string path = "";
            double winnings;
            cout << "DROPPING CHIP IN SLOT " << initial_drop;
            
            //giving the chip a path and printing it
            cout << "\nPATH: [" << fixed << setprecision(1) << initial_drop << " ";
            
            winnings = oneChip(initial_drop, path);
            
            cout << fixed << setprecision(1) << path << "]\nWINNINGS: $" << winnings;
        }
        
        
        //bowl of chips
        else if (menu_select == 2)
        {
            int number_of_chips = getChipNumber();
        
            //slot input
            double initial_drop = getSlotNumber();
            string path; //unused.  needed to call function
            
            //error check on slot input
            //declare winnings variables
            double total_winnings;
            double ave_winnings;
            
            total_winnings = multipleChips (initial_drop, number_of_chips);
            
            //print out total and average winnings
            ave_winnings = total_winnings / number_of_chips;
            cout << "TOTAL WINNINGS: $" << fixed << setprecision(2) << total_winnings
            << "\nAVERAGE WINNINGS PER CHIP: $" << fixed << setprecision(2) << ave_winnings << "\n";
            
            //reassign all variables to 0 for next time this option is selected
            ave_winnings = 0;
            total_winnings = 0;
        }
        
        //Sequential drop of multiple chips
        else if (menu_select == 3)
        {
            int number_of_chips = getChipNumber();
            double winnings_slot;
            double ave_winnings_slot;
            for (int s = 0; s <= 8; s++)
            {
                winnings_slot = multipleChips(s, number_of_chips);
                ave_winnings_slot = winnings_slot / number_of_chips;
                
                cout << "\nWinnings for Slot " << s << ": $" << winnings_slot
                << "\nAverage Winnings for Slot " << s << ": $" << ave_winnings_slot << endl;
                
                winnings_slot = 0;
                ave_winnings_slot = 0;
            }
        }
        
        
        //reprint the menu
        cout << MENUSTRING;
        
        cin >> menu_select;
        
        //error check for menu
        while (menu_select < 0 || menu_select > 3)
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



