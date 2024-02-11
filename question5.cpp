#include <iostream>
using namespace std;
int main()
{
    // Q5. WAP to find the difference between ASCII of two characters ,take them as input
    char ch1;
    cout << "Enter your first character: ";
    cin >> ch1;
    char ch2;
    cout << "Enter your second character: ";
    cin >> ch2;
    int ascii1 = (int)ch1;
    int ascii2 = (int)ch2;
    int diff = ascii1 - ascii2;
    cout << "Difference of two ascii is: " << diff << endl;
    return 0;
}