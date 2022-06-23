#include <iostream>
using namespace std;

int main()
{
    int n, start, end;
    int clock[25] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;
        for (int i = start; i < end; i++)
            clock[i]++;
    }

    int max = 0;
    for (int i = 0; i < 25; i++)
    {
        if (clock[i] > max)
            max = clock[i];
    }
    cout << max << endl;
}