#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int distance2 = (abs(x) - 0) * (abs(x) - 0) + (abs(y) - 0) * (abs(y) - 0);
    if (distance2 < 40000)
        cout << "inside" << endl;
    else
        cout << "outside" << endl;
}