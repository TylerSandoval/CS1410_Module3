// File: functionsReturn
// Created by Tyler Sandoval on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU

// Task: Define a function that takes one
// input parameter (integer), it increments the value
// by one, and it returns the new value to the user
#include <iostream>

using namespace std;
// Constants

// Prototypes
int IncrementByOne(int i); // Requires an integer
void ReallyIncrementByOne(int &i); // Requires reference(address) of an integer

// Main Program Program
int main(void)
{
    int j, k;
    cout << "Enter a number to increment by one: " << endl;
    cin >> j;
    k = IncrementByOne(j);
    cout << "That number incremented by one is: " << k << endl;

    cout << "Address of num: " << &j << endl;
    ReallyIncrementByOne(j);
    cout << "j is: " << j << endl;
    return 0;
}
// Function Definitions

//PASSING PARAMETERS BY VALUE: Local copy is made in the function, does not affect the original value
//in the main body.  This is what happens to j in this program
int IncrementByOne(int i)
{
    cout << "Address of i inside IncrementByOne: " << &i << endl;
    i++;
    return i;
}
// PASSING PARAMETER BY REFERENCE
void ReallyIncrementByOne(int &i)
{
    cout << "Address of i inside ReallyIncrementByOne: " << &i << endl;
    i++;
}