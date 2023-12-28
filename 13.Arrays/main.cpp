#include <iostream>
using namespace std;

int main()
{
    // int marks[4] = {1, 2, 4, 5}; // The 4 in square bracket is optional
    int marks[] = {1, 2, 4, 5}; // The compiler is smart enough to figure it out
    cout << marks << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    // -- Initializing the Array
    int mathMarks[4];
    mathMarks[0] = 1;
    mathMarks[1] = 3;
    mathMarks[2] = 4;
    mathMarks[3] = 5;
    cout << mathMarks;
    return 0;
}