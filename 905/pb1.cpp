#include <bits/stdc++.h>
using namespace std;

int a, ans, k;
int c(int x)
{
    if (x == 0)
        return 10;
    return x;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> a;
        ans = 4, k = 1;
        ans += abs(c(a / 1000) - k), k = c(a / 1000);
        a %= 1000;
        ans += abs(c(a / 100) - k), k = c(a / 100);
        a %= 100;
        ans += abs(c(a / 10) - k), k = c(a / 10);
        a %= 10;
        ans += abs(c(a) - k);
        cout << ans<<"\n";
    }
    return 0;
}