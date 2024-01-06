#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

//-- Call by value
//* This will not swap A and B
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//-- Call by memory address
// * This will swap A and B | Because we are taking memory address
void swapPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};

// -- Call by references
// * This will swap A and B | Because we are directly pointing towards variables
int &swapReferencesVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int a = 4, b = 5;
    cout << "The sum of 4 and 5 is: " << sum(a, b) << endl;

    //-- Swapping the variables
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(a, b); // * This will not swap A and B
    // swapPointers(&a, &b);    // * This will swap A and B | Because we are taking memory address
    swapReferencesVar(a, b)=466; // * This will swap A and B | Because we are directly pointing towards variables
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}