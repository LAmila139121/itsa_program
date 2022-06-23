#include <iomanip>
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
    char input[128];
    while (cin.getline(input, 128))
    {
        char *ptr = input;
        char word[128];
        float sum = 0;
        int i = 0;
        while ((ptr = getword(ptr, word)))
        {
            string tmp(word);
            int num = stoi(word);
            sum += num;
            i++;
        }
        cout << "Size: " << i << endl;
        cout << fixed << setprecision(3) << "Average: " << sum / i << endl;
    }
}