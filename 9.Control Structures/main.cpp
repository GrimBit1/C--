#include <iostream>

using namespace std;

int main()
{
    cout << "Hi" << endl;
    int age;
    cout << "Tell me ur age:";
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible to drive";
    }
    else
    {
        cout << "You are eligible to drive";
    }

    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;

    default:
        cout << "No special case";

        break;
    }
    return 0;
}