#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        if (i % 3 == 0)
            sum += i;
    }
    cout << sum << endl;
}