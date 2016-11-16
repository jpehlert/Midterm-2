//
//  main.cpp
//  Hot Plate Lab
//
//  Created by Joey Ehlert on 10/26/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

/*
 Joey Ehlert, Section 1, joey@ehlert.org
 
 Ready to be graded
 
 Purpose: Gain experience with 2-dimensional arrays and loops while solving a real-world problem ("steady state analysis").
 
 No Inputs
 
 Outputs:
 A 20 X 20 grid simulating a hot plate.
 First plate printed will be the plate before it begins heating
 Second plate printed will be the next plate once the heating has started
 Third plate printed will be the final state (all elements have difference < 0.1)
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>


using namespace std;

const int HOT_PLATE_DIMENSIONS = 20;

//function to initialize array
void initializeArray (double hot_plate[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS])
{
    const double INITAL_TEMP = 100;
    const double EDGES = 0;
    for (int i = 0; i < HOT_PLATE_DIMENSIONS; i++)
    {
        for (int j = 0; j < HOT_PLATE_DIMENSIONS; j++)
        {
            if (i == 0 || i == HOT_PLATE_DIMENSIONS - 1) //needs to be 1 less so that value still exists in array
            {
                hot_plate[i][j] = INITAL_TEMP;
            }
            if (j == 0 || j == HOT_PLATE_DIMENSIONS - 1) //same here
            {
                hot_plate[i][j] = EDGES;
            }
        }
    }
}

//function to print out array
void print(double my_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS])
{
    for (int i = 0; i < HOT_PLATE_DIMENSIONS; i++)
    {
        for (int j = 0; j < HOT_PLATE_DIMENSIONS; j++)
        {
            cout << fixed << setprecision(4) << setw(10) << my_array[i][j];
        }
        cout << endl;
    }
}

//for computing the average of the four variables surrounding it, and putting it into new hot plate variable
void averageUpade(double my_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS],
                  double new_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS])
{
    const int UPDATE_DIMENSIONS = HOT_PLATE_DIMENSIONS - 2;
    double total[UPDATE_DIMENSIONS][UPDATE_DIMENSIONS];
    int num_of_sums = 4;
    double average_array[UPDATE_DIMENSIONS][UPDATE_DIMENSIONS];
    //double new_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS];
   
    for (int i = 0; i < HOT_PLATE_DIMENSIONS; i++)
    {
        for (int j = 0; j < HOT_PLATE_DIMENSIONS; j++)
        {
            new_array[i][j] = my_array[i][j];
        }
    }
    
    for (int i = 1; i < HOT_PLATE_DIMENSIONS - 1; i++)//make sure you initialize more than zero, so you don't accidentally change the edges
    {
        for (int j = 1; j < HOT_PLATE_DIMENSIONS - 1; j++)//same here
        {
            total[i - 1][j - 1] = (my_array[i - 1][j] + my_array[i + 1][j] + my_array[i][j - 1] + my_array[i][j + 1]);
        }
    }
    
    for (int s = 0; s < UPDATE_DIMENSIONS; s++)
    {
        for (int k = 0; k < UPDATE_DIMENSIONS; k++)
        {
            average_array[s][k] = total[s][k] / num_of_sums;
        }
    }
    
    for (int m = 0; m < UPDATE_DIMENSIONS; m++)
    {
        for (int n = 0; n < UPDATE_DIMENSIONS; n++)
        {
            new_array[m + 1][n + 1] = average_array[m][n];
        }
    }
}

//update the new hot plate into hot plate for next iteration
void updatePlate(double my_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS],
                 double new_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS])
{
    for (int i = 0; i < HOT_PLATE_DIMENSIONS; i ++)
    {
        for (int j = 0; j < HOT_PLATE_DIMENSIONS; j++)
        {
            my_array[i][j] = new_array[i][j];
        }
    }
}

//function for determing when to stop
void whenStop (double my_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS],
              double new_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS])
{
    bool final_plate = false;
    int stable_plate_count = 0;
    const int FINAL_PLATE_COUNT = (HOT_PLATE_DIMENSIONS - 2) * (HOT_PLATE_DIMENSIONS - 2);
    while (final_plate == false)
    {
        updatePlate(my_array, new_array);
        averageUpade(my_array, new_array);
        for (int i = 1; i < HOT_PLATE_DIMENSIONS - 1; i++)
        {
            for (int j = 1; j < HOT_PLATE_DIMENSIONS - 1; j++)
            {
                if (my_array[i][j] - new_array[i][j] < 0.1 && my_array[i][j] - new_array[i][j] > -0.1)
                {
                    stable_plate_count++;
                }
            }
        }
        if (stable_plate_count == FINAL_PLATE_COUNT)
        {
            final_plate = true;
        }
        else
        {
            stable_plate_count = 0;
        }

    }
    updatePlate(my_array, new_array);
}

void outputToCSV (double my_array[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS], string file_name)
{
    ofstream out_file (file_name);
    
    for (int i = 0; i < HOT_PLATE_DIMENSIONS; i++)
    {
        for (int j = 0; j < HOT_PLATE_DIMENSIONS; j++)
        {
            if (j < HOT_PLATE_DIMENSIONS -1)
            {
                out_file << fixed << setprecision(4) << my_array[i][j] << ",";
            }
            else
            {
                out_file << fixed << setprecision(4) << my_array[i][j];
            }
        }
        out_file << endl;
    }
    out_file.close();
}


int main()
{
    double hot_plate[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS];
    double updated_hot_plate[HOT_PLATE_DIMENSIONS][HOT_PLATE_DIMENSIONS];
    string csv_file_name = "/Users/joey/Desktop/hot_plate_lab_data.csv";
    //ofstream out_file;
    initializeArray(hot_plate);
    cout << "Printing inital plate...\n";
    print(hot_plate);
    cout << "\n \nPrinting plate after one iteration...\n";
    averageUpade(hot_plate, updated_hot_plate);
    print(updated_hot_plate);
    cout << "\n\nPrinting final plate...\n";
    whenStop(hot_plate, updated_hot_plate);
    print(hot_plate);
    cout << "\n\nExporting to .csv file...\n";
    outputToCSV(hot_plate, csv_file_name);
    return 0;
}













