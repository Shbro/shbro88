#include <iostream>
using namespace std;
int main()
{
    // Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
    float height;
    cout << "Enter Height: ";
    cin >> height;
    float radius;
    cout << "Enter Radius: ";
    cin >> radius;
    float volume;
    volume = 3.14 * radius * radius * height;
    cout << "VOlume of cylinder is : " << volume << endl;
    return 0;
}