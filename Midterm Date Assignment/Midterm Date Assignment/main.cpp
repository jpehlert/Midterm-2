//
//  main.cpp
//  Midterm Date Assignment
//
//  Created by Joey Ehlert on 10/12/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>


using namespace std;





bool LeapYear (int year) //determine whether or not it is a leap year
{
    
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true;
            }
            else return false;
        }
        else return true;
    }
    else return false;
}


int Month (string month_string) //determine what month it is
{
    if (month_string == "January")
    {
        return 1;
    }
    else if (month_string == "February")
    {
        return 2;
    }
    else if (month_string == "March")
    {
        return 3;
    }
    else if (month_string == "April")
    {
        return 4;
    }
    else if (month_string == "May")
    {
        return 5;
    }
    else if (month_string == "June")
    {
        return 6;
    }
    else if (month_string == "July")
    {
        return 7;
    }
    else if (month_string == "August")
    {
        return 8;
    }
    else if (month_string == "September")
    {
        return 9;
    }
    else if (month_string == "October")
    {
        return 10;
    }
    else if (month_string == "November")
    {
        return 11;
    }
    else if (month_string == "December")
    {
        return 12;
    }
    else
    {
        return 999;
    }
}


//calculate the total number of days from jan 1, 1583 to date in question
int TotalDaysFromYears (int year)
{
    int total_days = 0;
    for (int y = 1583; y < year; y++)
    {
        bool leap_year = LeapYear(y);
        if (leap_year == true)
        {
            total_days += 366;
        }
        else
        {
            total_days += 365;
        }
    }
    return total_days;
}


int TotalDaysFromMonths (int year, int month)
{
    int total_days = 0;
    int m = 1;
    
    while (m < month)
    {
        if (month == 1)
        {
            total_days += 0;
        }
        else if (month == 4 || month == 6 || month == 8
                 || month == 9 || month == 11)
        {
            total_days += 31;
        }
        else if (month == 3)
        {
            bool leap_year = LeapYear(year);
            if (leap_year == true)
            {
                total_days += 29;
            }
            else
            {
                total_days += 28;
            }
        }
        //put january in here too because we start on the first
        else if (month == 2 || month == 5 || month == 7 || month == 10 || month == 12)
        {
            total_days += 30;
        }
        m++;
    }

    return total_days;
}


int TotalDaysFromDays (int day, int month)
{
    int total_days = 6; //because jan 1 1583 was saturday
    if (month ==1)
        {
        total_days = total_days + (day - 1); //subract one cause you need to to get the right number, but just in january
        }
    else{
        total_days = total_days + day; //don't need to for the rest of the months
    }
    return total_days;
}


//ideally, this would redo the menu every time so i wouldn't have to rewrite it
/*int ErrorInDate (int day, int year, int month)
{
    cout << "Please enter a valid date" << endl;
    cout << "Please input date (Month Day, Year): ";
    day = 0;
    year = 0;
    month = 0;
    string month_string;
    
    cin >> month_string >> day >> year;
    
    month = Month(month_string);
    
    return day, year, month;
}*/


//MAIN
int main ()
{
    int menu_option = 0;
    while (menu_option == 0)
    {
        cout << "Please input date (Month Day, Year): ";
        string month_string;
        int day;
        int year;
        
        cin >> month_string >> day >> year;
        
        bool leap_year = LeapYear(year);
        int month = Month(month_string);
        
        while (month == 999 || day < 0 || year < 1583 || day > 31 ||
               ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
               (month == 2 && leap_year == true && day > 29) ||
               (month == 2 && leap_year == false && day > 28))
        {
            cout << "Please enter a valid date" << endl;
            cout << "Please input date (Month Day, Year): ";
            day = -1;
            year = 0;
            month = -1;
            month_string = "";
            
            cin >> month_string >> day >> year;
            
            month = Month(month_string);
            leap_year = LeapYear(year);
            
            
            // i feel like this section is close, i just can't get it all to function together properly
            /*if (day > 28)
            {
                switch (month)
                {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        if (day > 31)
                        {
                            ErrorInDate(day, year, month);
                        }
                        break;
                        
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        if (day > 30)
                        {
                            ErrorInDate(day, year, month);
                        }
                        break;
                    
                    case 2:
                        if (leap_year == true && day > 29)
                        {
                            ErrorInDate(day, year, month);
                        }
                        else if (leap_year == false && day > 28)
                        {
                            ErrorInDate(day, year, month);
                        }
                        break;
                        
                    default:
                        break;
                }
                
            }
            else
            {
                ErrorInDate(day, year, month);
            }*/
            
            
        }
        
        //i can't figure out quite where or why, but i add/lose days throughout the year sometimes
        int total_days;
        total_days = TotalDaysFromYears(year)
        + TotalDaysFromMonths(year, month)
        + TotalDaysFromDays(day, month);
        
        int day_of_week = total_days % 7;
        
        //print out what day of the week it was
        //check if it's in the future
        if (year >= 2016 || (year == 2016 && month >= 10) || (year == 2016 && month == 10 && day > 14))
        {
            cout << month_string << " " << day << ", " << year << " will be a ";
            switch (day_of_week)
            {
                case 0:
                    cout << "Sunday \n";
                    break;
                case 1:
                    cout << "Monday\n";
                    break;
                case 2:
                    cout << "Tuesday\n";
                    break;
                case 3:
                    cout << "Wednesday\n";
                    break;
                case 4:
                    cout << "Thursday\n";
                    break;
                case 5:
                    cout << "Friday\n";
                    break;
                case 6:
                    cout << "Saturday\n";
                    break;
            }
        }
        //for all those dates in the past
        else
        {
            cout << month_string << " " << day << ", " << year << " was a ";
            switch (day_of_week)
            {
                case 0:
                    cout << "Sunday \n";
                    break;
                case 1:
                    cout << "Monday\n";
                    break;
                case 2:
                    cout << "Tuesday\n";
                    break;
                case 3:
                    cout << "Wednesday\n";
                    break;
                case 4:
                    cout << "Thursday\n";
                    break;
                case 5:
                    cout << "Friday\n";
                    break;
                case 6:
                    cout << "Saturday\n";
                    break;
            }
        }
        //give user option to retry
        cout << "Would you like to try another date? (0 for Yes or 1 for No) ";
        cin >> menu_option;
    }
    cout << "Goodbye!!\n";
    return 0;
        
}













