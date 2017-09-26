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
    // Every object shares this variable
    static int count; // one variable per CLASS
public:
    Distance(): feet(0), inches(0){count++;} // Constructor with no arguments
    Distance(int ft, float in): feet(ft), inches(in){count++;} // Constructor with two arguments


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
    int getCount()
    {
        return count;
    }
};
int Distance::count = 0;
// Prototypes
void ShowCurrentCount(Distance d1);

// Main Program Program
int main() {
    // Create an instance "instantiate" the class
    Distance d1,d4;

    // Use methods to set/access data
    cout << "\nd1 = ";
    d1.showDistance();
    cout << "Count is " << d1.getCount() << endl;

    Distance d2(5,4);
    Distance d3(2,4);
    cout << "Count is " << d4.getCount() << endl;
    cout << "\nd2 = ";
    d2.showDistance();
    cout << "\nd3 = ";
    d3.showDistance();

    d4.add_dist(d2,d3);
    cout << "\nd4 = ";
    d4.showDistance();
    d4 = d4.add_dist_tome(d2);
    cout << "\nd4 new= ";
    d4.showDistance();
    ShowCurrentCount(d4);
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
    Distance temp; // initial values 0,0
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12)
    {
        temp.inches -= 12.0;
        temp.feet = 1;
    }
    temp.feet += feet + d1.feet;
    return temp;
}

void ShowCurrentCount(Distance d1)
{
    cout << "The current count in my super class is " << d1.getCount() << endl;
}