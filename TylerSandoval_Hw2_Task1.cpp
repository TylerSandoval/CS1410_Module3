// File: TylerSandoval_Hw2_Task1
// Created by Tyler Sandoval on 9/19/2017 for CS1410.
// Copyright (c) 2017 WSU

/*
 * =====================================================================================
 *
 *       Filename:  housePrice.cpp
 *       	Usage:  ./housePrice.cpp
 *    Description:  Ask user to specify the address and price
 *    				of two house that are on sale
 *    				It prints out which of the two houses is cheaper
 *       Compiler:  g++
 *         Author:  Dr. Hugo Valle (), hugovalle1@weber.edu
 *   Organization:
 * =====================================================================================
 */
#include <iostream>
using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse();
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse = InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all possibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */

    // Decides the end output based on the results of the ComparePrices function
    switch (comparison)
    {
        case 1:
            cout << "the first house is cheaper" << endl;
            break;
        case 2:
            cout << "the two houses are equally expensive" << endl;
            break;
        case 3:
            cout << "the second house is cheaper" << endl;
            break;
        case 4:
        default:
            cout << "invalid comparison value, there must be a bug" << endl;
            break;
    }
    return 0;
}

/* Function Definitions */

// Allow the user to assign values to the housing information
struct house InputHouse()
{
    struct house h;

    cout << "Enter street number: " << endl;
    cin >> h.streetNum;
    cout << "Enter street name: " << endl;
    cin >> h.streetName;
    cout << "Enter house price: " << endl;
    cin >> h.price;

    return h;
}

// Print out the housing information for both houses to the user
void PrintHouse(int houseNum, struct house h)
{
    cout << "House Number: " << houseNum << endl;
    cout << "Street Number: " << h.streetNum << endl;
    cout << "Street Name: " << h.streetName << endl;
    cout << "House price: " << h.price << endl;
}

// Use if statements to compare housing prices, outputs are
// returned as scenarios for the switch statement
int ComparePrices(struct house h1, struct house h2)
{
    int compare;
    if (h1.price < h2.price)
    {
        compare = 1;
    }
    else if (h1.price == h2.price)
    {
        compare = 2;
    }
    else if (h1.price > h2.price)
    {
        compare = 3;
    }
    else
    {
        compare = 4;
    }
    return compare;
}
