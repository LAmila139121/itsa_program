#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}