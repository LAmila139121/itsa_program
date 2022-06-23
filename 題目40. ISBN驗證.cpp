#include <iomanip>
#include <iostream>

using namespace std;

int main()
{

    char input[10];
    int list[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> input[i];
        if (input[i] <= '9' && input[i] >= '0')
            list[i] = input[i] - '0';
        else
            list[i] = 10;
    }

    for (int j = 0; j < 2; j++)
    {
        for (int i = 1; i < 10; i++)
            list[i] = list[i] + list[i - 1];
    }
    if (list[9] % 11 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}