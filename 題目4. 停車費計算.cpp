#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int time = (c * 60 + d) - (a * 60 + b);

    if (time < 30)
    {
        cout << "0" << endl;
        return 0;
    }

    int hour = time / 60;
    int min = time % 60;

    if (hour < 2)
        cout << hour * 2 * 30 + (min / 30) * 30 << endl;
    else if (hour >= 2 && hour < 4)
        cout << 120 + ((hour - 2) * 2 * 40) + ((min / 30) * 40) << endl;
    else if (hour >= 4)
        cout << 280 + ((hour - 4) * 2 * 60) + ((min / 30) * 60) << endl;

    return 0;
}