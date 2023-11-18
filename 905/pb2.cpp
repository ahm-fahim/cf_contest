#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        string revS;
        for (int i = 1; i <= n - k; i++) {
            revS += s[i];

        }
        cout<< revS <<"\n";

        reverse(revS.begin(), revS.end());

        bool isPalindrome = false;
        for (int i = 1; i <= n - k; i++) {
            if (s[i] == revS[i]) {
                isPalindrome = true;
                break;
            }
        }

        if (isPalindrome) {
            cout << "N0\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
