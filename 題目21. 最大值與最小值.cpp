#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    float num, max, min;
    cin >> num;
    max = min = num;

    for (int i = 0; i < 9; i++)
    {
        cin >> num;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    cout << fixed << setprecision(2)
         << "maximum:" << max << endl
         << "minimum:" << min << endl;
}