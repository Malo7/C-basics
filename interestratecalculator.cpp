//
//  main.cpp
//  Stock Market Simulator
//
//  Created by SANAM FOROUGHI on 12/28/16.
//  Copyright © 2016 Sanam Foroughi. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;



int main()

    //cout << " boy \n i \n love \n applied \n and \n discrete \n mathematics \n practice \n makes \n perfect "; // new line }
    
    //{  if (5>3) {
     //   cout << "I need to practice calculus!"; // if statement. But how do I do one saying? If this person's age is less than 18 then give them a half fair
   // }
        //return 0;
{
    float a;
    float p = 10000; // is it a fixed value ??? or can be an imput from the user ??
    float r = .01; // use or ist an argument to the pow function which can be given as  1.001
     // you dont need r as its constant 
    // what about 31 days month
    counter =0;
     cin>> month;
    switch(month)
    {
        case 1:
            counter =31;
            break;
        case 2:
            counter= 32
            break;
            .......
            
            
    }
    
    for (int day =1 ; day <=counter; day ++) {
       a = p * pow(1+r, day);
    
       cout << day << " " << a << endl;
       }
    }

    return 0;
