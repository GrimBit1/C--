#include <iostream>
using namespace std;
int main()
{
    //-- Loops in C++
    /*  There are 3 types of loops
        1.For Loop
        2.While Loop
        3.Do-while Loop
     */

    //* For Loop in C++ | Whole process is done by for loop
    /* for ( initialisation ; condition ; iteration )
    {
        loop code
    } */

    for (int i = 0; i < 8; i++)
    {
        cout << i << endl;
    }

    //* While Loop in C++ | Just check the condition and runs the loop
    /* while ( condition )
    {
        loop code
    } */

    int i = 0;
    while (i < 8)
    {
        cout << i << endl;
        i++;
    }

    //* Do While Loop in C++ | Runs the loop one time then check for condition
    /* do
    {
        loop code
    } while ( condition ); */

    do
    {
        cout << i << endl;
        i++;
    } while (i < 16);

    return 0;
}