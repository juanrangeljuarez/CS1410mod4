// File: pointClass
// Created by Juan Rangel Juarez on 9/21/17 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants, Structs, Classes
class Point
{
private:
    float x;    // x-coordinate
    float y;
public:
    // constructor
    Point(): x(0), y(0){}
    // method
    void showPoint()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }


};

// Prototypes

// Main Program Program
int main() {
    Point p1;
    p1.showPoint();
    p1.updatePoint(2.5, 3.9);
    p1.showPoint();

    return 0;
}
// Function Definitions