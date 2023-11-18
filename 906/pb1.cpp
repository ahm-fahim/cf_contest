#include <bits/stdc++.h>
using namespace std;

bool arrayGood( vector<int> &arr) {
    if (arr.size() <= 2) {
        return true;
    }
    sort(arr.begin(), arr.end());

    int firstSum = arr[0] + arr[1];
    for (size_t i = 2; i < arr.size()-1 ; i++) {
        if (arr[i] + arr[i + 1] != firstSum) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n;i++) {
            cin >> arr[i];
        }

        if (arrayGood(arr)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}