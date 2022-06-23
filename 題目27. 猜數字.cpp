#include <iostream>
using namespace std;

int main()
{
    string answer;
    string guess;
    cin >> answer;
    while (cin >> guess)
    {
        int A = 0, B = 0;
        if (guess != "0000")
        {
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (i == j && answer[i] == guess[j])
                        A++;
                    else if (i != j && answer[i] == guess[j])
                        B++;
                }
            }
            cout << A << "A" << B << "B" << endl;
        }
        else
            break;
    }
}
