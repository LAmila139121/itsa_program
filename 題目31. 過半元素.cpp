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
    while (cin.getline(input, 1000))
    {
        char *ptr = input;
        char word[500];
        string list[500];
        int num[500] = {0};
        int cnt = 0;
        while ((ptr = getword(ptr, word)))
        {
            string tmp(word);
            list[cnt] = tmp;
            int i;
            for (i = 0; i < cnt; i++)
            {
                if (list[cnt] == list[i])
                {
                    num[i]++;
                    break;
                }
            }
            if (i == cnt)
                num[cnt]++;
            cnt++;
        }
        int max = 0;
        string max_num;
        for (int i = 0; i < cnt; i++)
        {
            if (num[i] > max)
            {
                max = num[i];
                max_num = list[i];
            }
        }

        if (max >= (cnt / 2) + 1)
            cout << max_num << endl;
        else
            cout << "NO" << endl;
    }
}