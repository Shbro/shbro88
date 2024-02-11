#include <iostream>
using namespace std;
int main()
{
    //Find the output for this code. Let input:- 3 2
    int x;
    cout << "Enter first number: ";
    cin >> x;
    int y;
    cout << "Enter second number: ";
    cin >> y;
    cout << (x != y) << " " << (x >= y);// output is 1 1
    return 0;
}