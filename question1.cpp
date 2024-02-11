#include <iostream>
using namespace std;
int main()
{
    //Find the output for this code. Let input:- 2 3 6
    int x, y, m;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number and value for taking modulus";
    cin >> y >> m;
    int Z = (x * y) % m;
    cout << "Output is: " << Z;//output is 0
    return 0;
}