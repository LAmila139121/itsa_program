#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int alphaCnt[26] = {0};
    int idx;
    string input;
    getline(cin, input);
    auto line = input.c_str();
    int len = input.size();
    int word = 0;

    for (int i = 0; i < len; i++)
    {
        if (line[i] == '\n')
            break;
        if (line[i] == ' ' || line[i] == '.')
            word++;
        else if (line[i] >= 'A' && line[i] <= 'Z')
        {
            idx = line[i] - 'A';
            alphaCnt[idx]++;
        }
        else if (line[i] >= 'a' && line[i] <= 'z')
        {
            idx = line[i] - 'a';
            alphaCnt[idx]++;
        }
    }

    if ((line[len - 1] == ' ' || line[len - 1] == ',' || line[len - 1] == '.'))
        word--;
    word++;

    cout << word << endl;
    for (int i = 0; i < 26; i++)
    {
        if (alphaCnt[i] != 0)
            cout << char('a' + i) << " : " << alphaCnt[i] << endl;
    }
}