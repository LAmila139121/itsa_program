#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n = a;
    int t[10] = {0};
    if (a < 0)
    {
        n = a * -1;
        n = n - 1;
    }

    for (int i = 7; i >= 0; i--)
    {
        t[i] = n % 2;
        n = n / 2;
    }

    if (a < 0)
    {
        for (int i = 7; i >= 0; i--)
        {
            if (t[i] == 0)
                t[i] = 1;
            else
                t[i] = 0;
        }
    }

    for (int i = 0; i < 8; i++)
        cout << t[i];
    cout << endl;
}