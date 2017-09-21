// File: distanceClass
// Created by Juan Rangel Juarez on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
/*Task: Define a class Distance
 * that stores int feet and float inches
 * Two methods: get -> Capture input from user
 *              set -> set information
 *              showDist -> display values
 * */
// Constants, Structs, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
    void getDistance()
    {
        cout << "Enter the feet: ";
        cin>>feet;
        cout << "Enter the inches: ";
        cin>>inches;
    }
    void setDistance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    void showDistance()
    {
        cout << "Feet " << feet;
        cout << " and inches " << inches <<endl;
    }
};

// Prototypes

// Main Program Program
int main() {
    // Create an instance "instantiate" the class
    Distance d, d2;
    // Use methods to set/access data
    d.setDistance(40,11.3);
    cout << "\nDistance 1"<< endl;
    d.showDistance();
    d2.setDistance(2,8.5);
    cout << "\nDistance 2"<< endl;
    d2.showDistance();
    //UPDATE
    d2.getDistance();
    cout << "\nDistance 2"<< endl;
    d2.showDistance();
    return 0;
}
// Function Definitions