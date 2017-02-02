//
//  StringController.hpp
//  Strings
//
//  Created by Wrigley, Joseph on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef StringController_hpp
#define StringController_hpp
#include <String>

using namespace std;

class StringController
{
private:
    int number = 5;
    int bro = 0;
    char plez[20] = "hi";
    string howLong;
    
    //methods
 
    void HowLong();
    void StringMaker();
    void atInt();
    void isEmpty();
    void substringStartEnd();
    void substringStart();
    void comparingStuff();
    
    
public:
    void start();
};

#endif /* StringController_hpp */
