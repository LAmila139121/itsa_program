#include <iomanip>
#include <iostream>

using namespace std;

int main()
{

    double input, sum_1 = 0, sum_2 = 0;
    cin >> input;
    if (input <= 120)
    {
        sum_1 = input * 2.1;
        sum_2 = input * 2.1;
    }
    else if (120 < input && input <= 330)
    {
        sum_1 = 120 * 2.1 + (input - 120) * 3.02;
        sum_2 = 120 * 2.1 + (input - 120) * 2.68;
    }
    else if (330 < input && input <= 500)
    {
        sum_1 = 120 * 2.1 + 210 * 3.02 + (input - 330) * 4.39;
        sum_2 = 120 * 2.1 + 210 * 2.68 + (input - 330) * 3.61;
    }
    else if (500 < input && input <= 700)
    {
        sum_1 = 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + (input - 500) * 4.97;
        sum_2 = 120 * 2.1 + 210 * 2.68 + 170 * 3.61 + (input - 500) * 4.01;
    }
    else if (input > 700)
    {
        sum_1 = 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + (input - 700) * 5.63;
        sum_2 = 120 * 2.1 + 210 * 2.68 + 170 * 3.61 + 200 * 4.01 + (input - 700) * 4.5;
    }
    cout << "Summer months:" << fixed << setprecision(2) << sum_1 << endl
         << "Non-Summer months:" << fixed << setprecision(2) << sum_2 << endl;
}