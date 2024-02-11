#include<iostream>
using namespace std;
int main()
{
    //Find the output for this code. Let input:- 2 3
    int x, y;
    cout << "The value of x is: ";
    cin >> x;
    cout << "The value of y is: ";
    cin >> y;
    x+=y;
    x-=y;
    x%=y;
    cout << "Output is: " << x << endl;// output is 2
    return 0;
}