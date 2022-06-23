#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    char num[5];
    cin >> num;

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '2' || num[i] == '3' || num[i] == '5' || num[i] == '6' || num[i] == '7' || num[i] == '8' || num[i] == '9')
            cout << "*****";
        else if (num[i] == '1')
            cout << "    *";
        else if (num[i] == '4')
            cout << "*   *";
        if (i != 3)
            cout << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '4' || num[i] == '8' || num[i] == '9')
            cout << "*   *";
        else if (num[i] == '1' || num[i] == '2' || num[i] == '3' || num[i] == '7')
            cout << "    *";
        else if (num[i] == '5' || num[i] == '6')
            cout << "*    ";
        if (i != 3)
            cout << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0')
            cout << "*   *";
        else if (num[i] == '1' || num[i] == '7')
            cout << "    *";
        else if (num[i] == '2' || num[i] == '3' || num[i] == '4' || num[i] == '5' || num[i] == '6' || num[i] == '8' || num[i] == '9')
            cout << "*****";
        if (i != 3)
            cout << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '6' || num[i] == '8')
            cout << "*   *";
        else if (num[i] == '1' || num[i] == '3' || num[i] == '4' || num[i] == '5' || num[i] == '7' || num[i] == '9')
            cout << "    *";
        else if (num[i] == '2')
            cout << "*    ";
        if (i != 3)
            cout << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '2' || num[i] == '3' || num[i] == '5' || num[i] == '6' || num[i] == '8')
            cout << "*****";
        else if (num[i] == '1' || num[i] == '4' || num[i] == '7' || num[i] == '9')
            cout << "    *";
        if (i != 3)
            cout << " ";
    }
    cout << endl;
}