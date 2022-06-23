#include <cstring>
#include <iostream>
using namespace std;

int main()
{

    char str1[128];
    char str2[512];

    cin >> str1 >> str2;
    int cnt = 0;
    char *ptr = str2;
    while ((ptr = strstr(ptr, str1)) != NULL)
    {
        ptr++;
        cnt++;
    }

    cout << cnt << endl;
}