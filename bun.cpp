//submit this file

/*
* CSCI3180 Principles of Programming Languages
*
* --- Declaration ---
* For all submitted files, including the source code files and the written  
* report, for this assignment:
*
* I declare that the assignment here submitted is original except for source
* materials explicitly acknowledged. I also acknowledge that I am aware of
* University policy and regulations on honesty in academic work, and of the
* disciplinary guidelines and procedures applicable to breaches of such policy
* and regulations, as contained in the website
* http://www.cuhk.edu.hk/policy/academichonesty/
*
* Name: Xu Haoran
* Student ID: 1155124383
* Email Address: 1155124383@link.cuhk.edu.hk
*
* Source material acknowledgements (if any):
* StackOverflow
* Github
* W3schools
* 
* Students whom I have discussed with (if any):
*
*/

#include "bun.h"
#include <iostream>
using std::cout;
using namespace std;

Bun::Bun(int softness) : softness(softness) //after the ":", we can have a member-initialization list for initializing the data members
{
    //Constructor that set the softness of a bun
    //you can also do the following instead of using the member-initialization list:
    //this->softness = softness;  //the LHS must use "this" to differentiate the data member instance variable from the local variable 
}

int Bun::getSoftness()
{
    return softness;  
}

void Bun::update()
{
    //TODO: implement this function
    //Can I just call the function from base class twice to reduce the freshness 2 instead of 1 every loop?
    //Hint: you can call the base class implementation of a function by BaseClassName::FunctionName()
    Ingredient::update();
    //reduce the softness by 2
    if(softness >= 2)
    softness -= 2;
    
}

void Bun::print()
{
    cout << "Bun (" << getFreshness() << "% fresh, " << softness << "% soft)";
}

