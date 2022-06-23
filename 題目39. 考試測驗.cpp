#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 220 || (a >= 60 && b >= 60 && c >= 60))
            cout << "P" << endl;
        else if (a + b + c < 200 && ((a < 60 && b >= 60 && c >= 60) || (b < 60 && a >= 60 && c >= 60) || (c < 60 && b >= 60 && a >= 60) || a >= 80 || b >= 80 || c >= 80))
            cout << "M" << endl;
        else
            cout << "F" << endl;
    }
}