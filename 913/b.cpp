#include <bits/stdc++.h>
using namespace std;

vector<char> deleteLastLowercase(vector<char> &arr)
{
    for (int i = arr.size() - 1; i >= 0; --i)
    {
        if (islower(arr[i]))
        {
            arr.erase(arr.begin() + i);
            break;
        }
    }
    return arr;
}

vector<char> deleteLastUppercase(vector<char> &arr)
{
    for (int i = arr.size() - 1; i >= 0; --i)
    {
        if (isupper(arr[i]))
        {
            arr.erase(arr.begin() + i);
            break;
        }
    }
    return arr;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        vector<char> arr;
        for (char i : s)
        {
            if (i == 'b')
            {
                arr = deleteLastLowercase(arr);
            }
            else if (i == 'B')
            {
                arr = deleteLastUppercase(arr);
            }
            else
            {
                arr.push_back(i);
            }
        }

        string result(arr.begin(), arr.end());
        cout << result << "\n";
    }

    return 0;
}
