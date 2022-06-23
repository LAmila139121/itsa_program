#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, p;
    long double r;
    cin >> r >> n >> p;

    long double sum = 0;
    for (int i = 0; i < n; i++)
        sum = (sum + p) * (r + 1);

    cout << (long long)sum << endl;
}