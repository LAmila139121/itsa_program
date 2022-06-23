#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int num[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> num[i][j];
    }

    for (int i = 0; i < 3; i++)
    {
        if (num[i][0] == num[i][1] && num[i][1] == num[i][2])
        {
            cout << "True" << endl;
            return 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (num[0][i] == num[1][i] && num[1][i] == num[2][i])
        {
            cout << "True" << endl;
            return 0;
        }
    }
    if (num[0][0] == num[1][1] && num[0][0] == num[2][2])
    {
        cout << "True" << endl;
        return 0;
    }
    if (num[0][2] == num[1][1] && num[0][2] == num[2][0])
    {
        cout << "True" << endl;
        return 0;
    }
    cout << "False" << endl;
}