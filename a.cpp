#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> order;
        for (int i = n; i >= 1; i--)
        {
            if (k > 0)
            {
                order.push_back(i);
                k--;
            }
            else
            {
                order.push_back(n - i + 1);
            }
        }

        for (int i : order)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
