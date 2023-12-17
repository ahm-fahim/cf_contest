#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, ans = "";
        int num1 = 0, num2 = 0;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] == 'b')
                num2++;
            else if (s[i] == 'B')
                num1++;
            else if (s[i] >= 97 && s[i] <= 122 && num2 != 0)
                num2--;
            else if (s[i] >= 65 && s[i] <= 90 && num1 != 0)
                num1--;
            else
                ans += s[i];
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}