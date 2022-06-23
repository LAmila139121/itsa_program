#include <iostream>
using namespace std;

int main()
{
    int list[5];
    for (int i = 0; i < 4; i++)
        cin >> list[i];
    int max = 0;
    int same = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (list[i] == list[j])
            {
                same++;
                int sum = 0;
                for (int k = 0; k < 4; k++)
                {
                    if (k != i && k != j)
                        sum += list[k];
                }
                if (max < sum)
                    max = sum;
            }
        }
    }
    if (same == 6)
        cout << "WIN" << endl;
    else if (same == 0 || same == 3)
        cout << "R" << endl;
    else
        cout << max << endl;
}