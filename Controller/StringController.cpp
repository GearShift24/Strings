//
//  StringController.cpp
//  Strings
//
//  Created by Wrigley, Joseph on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "StringController.hpp"
#include <iostream>

using namespace std;

void StringController :: start()
{
    this->HowLong();
    this->StringMaker();
    this->atInt();
    this->isEmpty();
    this->substringStartEnd();
    this->substringStart();
    this->comparingStuff();
    
    
    //
    //
    //array assignment upload
    
    
    
    int derp [8];
    double derpio [29];
        
    
    
}


void StringController:: HowLong()
{
    //tests how long the number is
    bro = sizeof(number);
    
    cout << "Hello, the size of the string is: " << bro << endl;
}



void StringController:: StringMaker()
{
    //makes a string piece by piece
    char plez[] = {'p', 'l', 'e', 'z'};
    cout << "We making a string now, it comes out as: " << plez << endl;
}


void StringController:: atInt()
{
    //changed a letter in string
    char broString[100] = "broooooooooooooooooooooooooo";
at:broString[7] = {'f'};
    cout << "Now were using another string called bro, and adding f somewhere in there! Here it is: " << broString << endl;
}

void StringController:: isEmpty()
{
    //cheecks if it is empty
    howLong = "hiiii";
    howLong.empty();
    cout << "I think we seeing if a string is empty, it isnt and here is the output: " << howLong << endl;
}

void StringController:: substringStartEnd()
{
    string temp = howLong.substr(4,7);
    cout << "we starting at point 3 and ending at point 7" << endl;
}

void StringController:: substringStart()
{
    string temp = howLong.substr(3);
    cout << "Yo here is a substring of howLong at point 3: " << temp << endl;
    
}

void StringController:: comparingStuff()
{
    //compares 2 different strings
    howLong = "hiiii";
    string anotherString = "this is a very long string to make it no work";
    if(howLong.compare(anotherString) == 0)
    {
        cout << "yoo they the same bro" << endl;
    }
    else{cout << "I checked howLong string and anotherStrinf and they are not same" << endl;
    }
    
    
    
    
    
    

    
    
}
