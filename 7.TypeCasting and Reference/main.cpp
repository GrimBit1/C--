#include <iostream>
using namespace std;
int c = 45;

int main()
{
    // // Normal Code | Algorithm
    // int a, b, c;
    // cout << "Enter value of a:";
    // cin >> a;
    // cout << "Enter value of b:";
    // cin >> b;
    // c = a + b;
    // cout << "The sum is :" << c << endl;
    // // Accessing the global variable
    // // Scope resolution operator   ::

    // cout << "The global c is :" << ::c; // This will output global C variable

    // // Literals
    // float a = 34.4;
    // long double b = 34.4;

    // 34.4; // The compiler will take it as a double
    // // So to take it as float ,we use
    // 34.4f;
    // // And vice versa
    // 34.4l;

    // // Reference Variables
    // float x = 5;
    // float &y = x;
    // cout << y; // The y is referencing to x , means both are same variable

    // Typecasting
    int a = 345;
    cout << (float)a;
    int c = int(34.4);
}