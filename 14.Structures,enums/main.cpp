#include <iostream>
using namespace std;

//-- Structs
struct employee
{
    int eID;
    char favChar;
    float salary;
};

//-- Unions | Same like structs but with better memory management

union money //* Unions are like structs but we can only use one data type at the time
{
    int rice;     // If i define rice then i can't use car or pounds
    char car;     // Because it will allocate the highest amount of memory needed to the data type
    float pounds; // Like int takes 4 byte, char takes 1 byte and float takes 4 bytes. Then it will allocate 4 bytes
};                // If i define other data type ,then it will just overwrite previous memory allocation

int main()
{
    // --  Enum | Enum just define the variable given inside with int
    enum Meal
    {
        breakfast, // This value has 0
        lunch,     // This value has 1
        dinner     // This value has 2
    };             // Enum is used to make variable more readable

    struct employee harry = employee{1, 'A', 2000};
    cout << harry.salary;
    return 0;
}