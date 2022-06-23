#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    float n;
    int m;

    while (cin >> n >> m)
    {
        if (m == 1)
            cout << fixed << setprecision(1) << (n - 80) * 0.7 << endl;
        else
            cout << fixed << setprecision(1) << (n - 70) * 0.6 << endl;
    }

    return 0;
}