#include <iostream>
using namespace std;

int N;

void collatz()
{
    int cnt = 0;
    // cin >> N;
    cout << cnt << ' ' << N << '\n';
    while (N != 1)
    {
        if (N % 2 == 0)
            N /= 2;
        else
            N = (N * 3) + 1;
        cnt++;
        cout << cnt << ' ' << N << '\n';
    }
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << "N:" << i << '\n';
        N = i;
        collatz();
        cout << "-----------------\n\n";
    }
    return 0;
}