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
    Distance(): feet(0), inches(0){} // Constructor with no arguments
    Distance(int ft, float in): feet(ft), inches(in){} // Constructor with two arguments
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
    void add_dist(Distance d1, Distance d2);
    Distance add_dist_tome(Distance d1);
};

// Prototypes

// Main Program Program
int main() {
    // Create an instance "instantiate" the class
    Distance d1,d4;
    Distance d2(5,4);
    Distance d3(2,4);
    // Use methods to set/access data
    cout << "\nd1 = ";
    d1.showDistance();
    cout << "\nd2 = ";
    d2.showDistance();
    cout << "\nd3 = ";
    d3.showDistance();

    d4.add_dist(d2,d3);
    cout << "\nd4 = ";
    d4.showDistance();
    d4.add_dist_tome(d2);
    cout << "\nd4 new= ";
    d4.showDistance();
    return 0;
}

// Function Definitions
/*Belongs to the class. A method for members only
 * Template: type CLASSNAME:: Function_name()
 * 1) Declare prototype inside class
 * 2) Definition is outside class
 * 3)
 * */
void Distance::add_dist(Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;    // add the inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;         // check for extra foot
    }
    feet += d2.feet + d3.feet; // add feet
}

Distance Distance::add_dist_tome(Distance d1)
{
    Distance temp(d1.feet,d1.inches); // initial values 0,0
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12)
    {
        temp.inches -= 12.0;
        temp.feet = 1;
    }
    temp.feet += feet + d1.feet;
    return temp;
}