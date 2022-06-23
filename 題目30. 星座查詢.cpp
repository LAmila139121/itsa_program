#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 1)
    {
        if (b <= 20)
            cout << "Capricorn" << endl;
        else
            cout << "Aquarius" << endl;
    }
    if (a == 2)
    {
        if (b <= 18)
            cout << "Aquarius" << endl;
        else
            cout << "Pisces" << endl;
    }
    if (a == 3)
    {
        if (b <= 20)
            cout << "Pisces" << endl;
        else
            cout << "Aries" << endl;
    }
    if (a == 4)
    {
        if (b <= 20)
            cout << "Aries" << endl;
        else
            cout << "Taurus" << endl;
    }
    if (a == 5)
    {
        if (b <= 21)
            cout << "Taurus" << endl;
        else
            cout << "Gemini" << endl;
    }
    if (a == 6)
    {
        if (b <= 21)
            cout << "Gemini" << endl;
        else
            cout << "Cancer" << endl;
    }
    if (a == 7)
    {
        if (b <= 22)
            cout << "Cancer" << endl;
        else
            cout << "Leo" << endl;
    }
    if (a == 8)
    {
        if (b <= 23)
            cout << "Leo" << endl;
        else
            cout << "Virgo" << endl;
    }
    if (a == 9)
    {
        if (b <= 23)
            cout << "Virgo" << endl;
        else
            cout << "Libra" << endl;
    }
    if (a == 10)
    {
        if (b <= 23)
            cout << "Libra" << endl;
        else
            cout << "Scorpio" << endl;
    }
    if (a == 11)
    {
        if (b <= 22)
            cout << "Scorpio" << endl;
        else
            cout << "Sagittarius" << endl;
    }
    if (a == 12)
    {
        if (b <= 21)
            cout << "Sagittarius" << endl;
        else
            cout << "Capricorn" << endl;
    }
}