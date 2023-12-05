/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  A.H.M. Fahim Morshed                                                |
 |                                                                      |
 |  ```Is a competitive programming enthusiast who is deeply            |
 |  passionate about coding. Hailing from Bogura, Bangladesh,           |
 |  his coding journey started at a young age, driven by a              |
 |  fascination for solving intricate problems.                         |
 |                                                                      |
 |  Fahim has excelled in competitive programming, consistently         |
 |  ranking among the top participants in various                       |
 |  contests.Beyond competitions, he shares his                         |
 |  expertise by mentoring and assisting fellow                         |
 |  programmers on online forums.                                       |
 |                                                                      |
 |  His dedication to self-improvement, willingness to embrace new      |
 |  challenges, and effective teamwork make him a valuable              |
 |  asset to any project.                                               |
 |                                                                      |
 |  Fahim's love for coding, combined with his diverse interests,       |
 |  reflects his well-rounded personality, making him an inspiring      |
 |  figure in the programming community at Southeast University.```     |
 |                                                                      |
 |  Github   - ahm-fahim                                                |
 |  Linkedin - https://www.linkedin.com/in/md-fahim-morshed-5b2126233/  |
 |  Gmail    - contactahmfahim@gmail.com                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

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