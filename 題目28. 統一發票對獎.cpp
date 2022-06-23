#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;
    int list[6] = {0};
    long int sum = 0;
    int n;
    cin >> n;
    int prize[6] = {200000, 40000, 10000, 4000, 1000, 200};
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        if (num == str1)
        {
            sum = sum + 2000000;
            list[0]++;
        }
        else
        {
            int cnt[3] = {0};
            int max = 0;
            for (int k = 7; k >= 0; k--)
            {
                if (str2[k] == num[k])
                    cnt[0]++;
                else
                    break;
            }
            if (cnt[0] > max)
                max = cnt[0];
            for (int k = 7; k >= 0; k--)
            {
                if (str3[k] == num[k])
                    cnt[1]++;
                else
                    break;
            }
            if (cnt[1] > max)
                max = cnt[1];
            for (int k = 7; k >= 0; k--)
            {
                if (str4[k] == num[k])
                    cnt[2]++;
                else
                    break;
            }
            if (cnt[2] > max)
                max = cnt[2];

            if (max >= 3)
            {
                sum += prize[8 - max];
                list[9 - max]++;
            }
        }
    }
    cout << list[0] << " ";
    for (int i = 0; i < 6; i++)
        cout << " " << list[i];
    cout << endl
         << sum << endl;
}