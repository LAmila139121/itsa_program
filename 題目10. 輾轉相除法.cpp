#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        for (int i = b; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    else
    {
        for (int i = a; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
}