#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, z;

    cout << "Side 1 = ";
    cin >> x;
    cout << "Side 2 = ";
    cin >> y;

    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "Hypotenuse = " << z << endl;

}