#include <iostream>
using namespace std;
class smallObj  /*Define class*/
{
private:
    int somedata;   // class data
public:
    void setdata(int d) // Member function set data
    {
        somedata = d;
    }
    void showdata() // Member function to display/get data
    {
        cout << "Data is " << somedata << endl;
    }
};
int main() {
    // Create instances or a member of the class
    smallObj s1, s2;
    // ERROR: You cannot access your data directly
    // Need to use an access method
    // set my data
    // Dot operator -> class member access operator
    s1.setdata(4);
    s2.setdata(156);
    // show sata
    s1.showdata();
    s2.showdata();
    return 0;
}