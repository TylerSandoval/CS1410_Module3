#include <iostream>
using namespace std;

// Task: Define a function Arithmetic() that takes two
// Floats as input parameters and it displays
// Their sum, difference, product
void Arithmetic(float i, float j);
int main()
{
    float num1, num2;
    char userChoice;
    // Ask the user for two number inputs
    while (1) //continue until break
    {
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
        // Call the function using the two inputs
        Arithmetic(num1, num2);
        cout << "Do you want to continue? y/n" << endl;
        cin >> userChoice;
        if (userChoice == 'n')
        {
            break;
        }
    }
    return 0;  //make sure return is outside of the loop!
}
void Arithmetic(float i, float j)
{
    cout << "Sum: " << i + j << endl;
    cout << "Difference: " << i - j << endl;
    cout << "Product: " << i * j << endl;

    return; // optional
}