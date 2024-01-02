#include <iostream>
using namespace std;

//-- Function Prototyping
// Initialising the function so compiler can already detect the function is called function prototyping
int sum(int a, int b);


int main()
{
    int int1, int2;
    cout << "Enter first number " << endl;
    cin >> int1;
    cout << "Enter second number " << endl;
    cin >> int2;
    cout << "The sum of those two number is " << sum(int1, int2);
    return 0;
}


//-- Functions are just logic which can be used again and again without copying

//* Sum Function / Returns sum of two arguments
int sum(int a, int b)
{
    return a + b;
}
