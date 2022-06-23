#include <iostream>
#include <string>
using namespace std;

char *getword(char *line, char *word)
{

    char *ptr = line;
    char *qtr = word;

    word[0] = '\0';

    while (*ptr && *ptr == ',')
    {
        ptr++;
    }
    while (*ptr && *ptr != ',')
    {
        if (*ptr >= '0' && *ptr <= '9')
            *qtr++ = *ptr++;
    }
    *qtr = '\0';

    if (word[0] == '\0')
    {
        return NULL;
    }
    else
    {
        return ptr;
    }
}

int main()
{

    char input[100];
    cin >> input;
    char *ptr = input;
    char word[500];
    int a[5];
    for (int i = 0; i < 4; i++)
    {
        ptr = getword(ptr, word);
        a[i] = stoi(word);
    }
    if (a[1] * 15 + a[2] * 20 + a[3] * 30 > a[0])
    {
        cout << "0" << endl;
        return 0;
    }
    int num = a[0] - (a[1] * 15 + a[2] * 20 + a[3] * 30);

    cout << num % 50 % 5 << "," << num % 50 / 5 << "," << num / 50 << endl;
}