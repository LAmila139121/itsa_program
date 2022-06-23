#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, p;
    float r;
    cin >> r >> n >> p;

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p;
        sum += sum * r;
    }
    int a = sum;
    cout << fixed << setprecision(0) << a << endl;
}