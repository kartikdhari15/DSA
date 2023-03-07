#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    cout << "Prime Numbers:";
    for (int j = 2; j <= n; j++)
    {
        if (prime[j] == true)
            cout << j << " ";
    }
}
main()
{
    int n = 30;
    sieve(n);
}
