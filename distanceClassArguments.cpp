// File: distanceClass
// Created by Tyler Sandoval on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
/* Task: Define a class called Distance
 * that stores int feet and float inches
 * Two methods: setDist -> Capture input from user
 *              getDist -> Set the information with customer input
 *              showDist -> Display value
 */

// Constants, Structs, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
    // Constructor
    Distance(): feet(0), inches(0) {}
    Distance(int x, float y): feet(x), inches(y) {}
    void setDist(int a, float b)
    {
        feet = a;
        inches = b;
    }
    void getDist()  // Gets user input
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showDist()
    {
        cout << "\nHeight: " << feet << "'-" << inches << "\"" << endl;
    }
    void add_dist(Distance d1,Distance d2);
    Distance add_dist_tome(Distance d1);
};
// Prototypes

// Main Program Program
int main(void)
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    cout << "\nd1 = ";
    d1.showDist();
    // Use the setDist method to set/access data
    Distance d2(8, 2);
    Distance d3(2, 4);
    cout << "\nd2 = ";
    d2.showDist();
    cout << "\nd3 = ";
    d3.showDist();

    d4.add_dist(d2, d3);
    cout << "\nd4 = ";
    d4.showDist();
    // Access a public data member

    return 0;
}
// Function Definitions
 /* This function belongs to the class.  A method for members only
 * Template: CLASSNAME::FunctionName()
 * 1) Declare prototype inside class
 * 2)
 * 3) Use the scope resolution operator ::*/
void Distance::add_dist(Distance d1, Distance d2)
{
    inches = d1.inches + d2.inches;  // add the inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;                     // check for extra foot, add to feet
    }
    feet += d1.feet + d2.feet;      // add the feet
}
Distance Distance::add_dist_tome(Distance d1)
{
    Distance temp; // initial values 0,0
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12)
    {
        inches -= 12.0;
        temp.feet++;
    }
    temp.feet += feet + d1.feet;
    return temp;
}