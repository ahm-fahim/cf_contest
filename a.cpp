#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool found = false;

        for (int i = 1; i < s.size(); ++i)
        {
            string a = s.substr(0, i);
            string b = s.substr(i);

            if (a[0] != '0' && b[0] != '0' && stoi(b) > stoi(a))
            {
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
