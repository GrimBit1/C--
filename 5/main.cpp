#include <iostream>
using namespace std;
int main()
{
    int input1 = 0;
    int input2 = 0;
    cout << "Enter the value of Input 1:\n"; // Insertion Operator
    cin >> input1;                           // Extraction Operator
    cout << "Enter the value of Input 2:\n"; // Insertion Operator
    cin >> input2;                           // Extraction Operator
    cout << "The sum is:" << input1 + input2;
    return 0;
}
