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

#include <iostream>
#include <vector>

std::vector<char> deleteLastLowercase(std::vector<char> &arr)
{
    for (int i = arr.size() - 1; i >= 0; --i)
    {
        if (std::islower(arr[i]))
        {
            arr.erase(arr.begin() + i);
            break;
        }
    }
    return arr;
}

std::vector<char> deleteLastUppercase(std::vector<char> &arr)
{
    for (int i = arr.size() - 1; i >= 0; --i)
    {
        if (std::isupper(arr[i]))
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
    std::cin >> t;

    while (t--)
    {
        std::string s;
        std::cin >> s;

        std::vector<char> arr;
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

        std::string result(arr.begin(), arr.end());
        std::cout << result << std::endl;
    }

    return 0;
}
