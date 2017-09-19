// File: functionsStructs
// Created by Tyler Sandoval on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>

using namespace std;
// Task: Create a function that displays the
// x and y coordinate of a point.
// Constants & structs
struct Point
{
    float x;   // x value
    float y;   // y value
};
// Prototypes
// The Prototypes MUST be defined AFTER the structs
void DisplayPoint(struct Point p);
// Main Program Program
int main(void)
{
    Point first = {2, 8};
    DisplayPoint(first);
    return 0;
}
// Function Definitions
void DisplayPoint(struct Point p)
{
    cout << "X: " << p.x << endl;
    cout << "Y: " << p.y << endl;
}