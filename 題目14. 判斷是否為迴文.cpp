#include <iostream>
#include <string>
using namespace std;

int main()
{
    string buf;
    cin >> buf;
    int len = buf.size();
    int i;
    for (i = 0; i < len / 2; i++)
    {
        if (buf[i] != buf[len - i - 1])
        {
            cout << "NO" << endl;
            break;
        }
    }
    if (i >= len / 2)
        cout << "YES" << endl;
}