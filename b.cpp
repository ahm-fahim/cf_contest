#include <bits/stdc++.h>
using namespace std;

int countPalindromes(const string& s) {
    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            ++cnt;
            --l;
            ++r;
        }
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            ++cnt;
            --l;
            ++r;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int maxPalindromes = 0;
    string result = s;

    for (int i = 0; i < n; ++i) {
        char originalChar = s[i];

        for (char c = 'a'; c < originalChar; ++c) {
            string modifiedString = s;
            modifiedString[i] = c;
            int palindromes = countPalindromes(modifiedString);

            if (palindromes > maxPalindromes) {
                maxPalindromes = palindromes;
                result = modifiedString;
            }
        }
    }

    cout << maxPalindromes << endl;
    cout << result << endl;

    return 0;
}
