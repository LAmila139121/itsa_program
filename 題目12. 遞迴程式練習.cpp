#include <iostream>
#include <vector>
using namespace std;

int f(int num)
{

    if (num == 0 || num == 1)
        return num + 1;
    else
        return f(num - 1) + f(num / 2);
}

int main()
{
    int a;
    cin >> a;
    cout << f(a) << endl;
}