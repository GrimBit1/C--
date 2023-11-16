#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 35;
    cout << "Value of a was " << a << endl;
    a = 45;
    cout << "Value of a is " << a << endl;

    //-- Constants in C++
    const int b = 345; // Using const before declaration makes it a constant

    // b = 45; //! This will give error : assignment of read-only variable 'b'

    // -- Manipulators
    // * Manipulators are used to manipulate the display output of program
    // eg
    // endl -- It gives that line is ended here
    // setw() -- It ensures that variable / letters after this function only use a given width

    int c = 35, d = 455, e = 1344;
    cout << "The value of c is : " << c << endl;
    cout << "The value of d is : " << d << endl;
    cout << "The value of e is : " << e << endl;
    cout << endl;
    cout << "The value of c is : " << setw(4) << c << endl;
    cout << "The value of d is : " << setw(4) << d << endl;
    cout << "The value of e is : " << setw(4) << e << endl;

    return 0;
}