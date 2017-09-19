// File: Point
// Created by Tyler Sandoval on 9/19/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>

using namespace std;
// Global, Constants, and Structures
const int MAX_X = 10;
const int MAX_Y = 10;
const float IN_CM = 2.54;

struct Point
{
    float x;    // x-coordinate
    float y;    // y-coordinate
};
// Prototypes
void showPoint(const struct Point &p); // Make constant so value is not changed
void updatePoint(struct Point &p);
struct Point createPoint();
inline float inchesToCm(float val){ return val * IN_CM;};

/* Take two option input values.  If no values are entered,
 * function uses the default values
 * initialized in the parameters
 * Default values only go on the prototype
 */
struct Point createPointValue(float x = 0.0, float y = 0.0);

// Main Program Program
int main()
{
    struct Point p1 = {3.3,5.5};
    Point p2;
    Point p3;

    showPoint(p1);
    updatePoint(p1);
    showPoint(p1);

    p2 = createPoint();
    showPoint(p2);

    p3 = createPointValue(7.6, 1.2);
    showPoint(p3);

    p3.x = inchesToCm(p3.x);
    showPoint(p3);

    return 0;
}
//Function definitions
/*
 * Take a constant address of a
 * structure point.
 * You cannot modify the content of
 * the structure
 */
void showPoint(const struct Point &p)
{
    cout << "X-coordinate is: " << p.x << endl;
    cout << "Y-coordinate is: " << p.y << endl;
    cout << endl;
}
void updatePoint(struct Point &p) //passing by reference
{
    // Update x and y by incrementing their values by 1
    p.x++;
    p.y++;
}
struct Point createPoint()
{
    Point p = {0,0};

    return p;
}
struct Point createPointValue(float x, float y)
{
    Point p;
    p.x = x;
    p.y = y;

    return p;
}
