#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        int same = 0;
        for (int i = 0; i < str1.length(); i++)
        {
            for (int j = 0; j < str2.length(); j++)
            {
                if (str1[i] == str2[j])
                {
                    str2[j] = ' ';
                    same++;
                    break;
                }
            }
        }
        cout << str1.length() + str2.length() - (same * 2) << endl;
    }
}