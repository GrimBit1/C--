#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 8; i++)
    {
        if (i == 2)
        {
            continue;
            ; // Continue means to skip this iteration in the loop
        }
        cout << i << endl;
        if (i == 4)
        {
            break;
            ; // Break means to break the loop
        }
    }

    return 0;
}