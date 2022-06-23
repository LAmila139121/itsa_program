#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int n;
    cin >> n;
    int size = input.size();
    auto line = input.c_str();
    char result[size];

    for (int i = 0; i < size; i++)
    {
        if (line[i] >= 'A' && line[i] <= 'Z')
        {
            if (input[i] + n > 'Z')
                result[i] = input[i] + n - 26;
            else
                result[i] = input[i] + n;
        }
        else if (line[i] >= 'a' && line[i] <= 'z')
        {
            if (input[i] + n > 'z')
                result[i] = input[i] + n - 26;
            else
                result[i] = input[i] + n;
        }
        else if (line[i] >= '0' && line[i] <= '9')
        {
            if (input[i] + n > '9')
                result[i] = input[i] + n - 10;
            else
                result[i] = input[i] + n;
        }
        else
            result[i] = input[i];
    }
    for (int i = 0; i < size; i++)
        cout << result[i];
    cout << endl;
}