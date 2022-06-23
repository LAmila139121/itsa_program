#include <iostream>
#include <string>
using namespace std;

char *getword(char *line, char *word)
{

    char *ptr = line;
    char *qtr = word;

    word[0] = '\0';

    while (*ptr && isspace(*ptr))
    {
        ptr++;
    }
    while (*ptr && !isspace(*ptr))
    {
        if (isupper(*ptr))
            *ptr = tolower(*ptr);
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

    char input[1000];
    cin.get(input, 1000);
    char *ptr = input;
    char word[500];
    string list[500];
    int state[500] = {0};
    int cnt = 0;
    while ((ptr = getword(ptr, word)))
    {
        string tmp(word);
        list[cnt] = tmp;
        for (int i = 0; i < cnt; i++)
        {
            if (list[cnt] == list[i])
            {
                state[cnt] = 1;
                break;
            }
        }
        cnt++;
    }
    cout << list[0];
    for (int i = 1; i < cnt; i++)
    {
        if (state[i] == 1)
            continue;
        cout << " " << list[i];
    }
    cout << endl;
}