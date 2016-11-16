//
//  main.cpp
//  play
//
//  Created by Joey Ehlert on 9/28/16.
//  Copyright © 2016 Joey Ehlert. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int theFunction ()
{
    int random_value = rand();
    return random_value;
}

int main ()
{
    srand(43);
    int random_value = theFunction();
    cout << random_value << endl;
    return 0;
}
