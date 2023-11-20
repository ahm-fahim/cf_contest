#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int operations = 0;
        int prev = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > prev)
            {
                int diff = a[i] - prev;
                int times = (diff - 1) / prev;
                operations += times;
                prev = a[i];
            }
            else
            {
                prev = a[i];
            }
        }

        cout << operations << endl;
    }

    return 0;
}
