#include <iostream>
using namespace std;

int main()
{
    // -- Pointer -> which holds the memory address of other data type
    int a = 3;
    int *b = &a;

    // & ------> Address of operator
    cout << &a << endl;
    cout << b << endl;

    // * ------> Dereferencing of operation
    cout << *b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << c << endl;
    cout << *c << endl;
    cout << **c << endl;

    return 0;
}