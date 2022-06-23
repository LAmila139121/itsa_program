#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    if (n % 400 == 0)
        cout << "Bissextile Year" << endl;
    else if (n % 100 == 0)
        cout << "Common Year" << endl;
    else if (n % 4 == 0)
        cout << "Bissextile Year" << endl;
    else
        cout << "Common Year" << endl;
    return 0;
}