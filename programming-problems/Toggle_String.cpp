#include <iostream>
using namespace std;

int main()
{

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if ((int)str[i] < 97)
        {
            str[i] = (char)(str[i] + 32);
        }
        else
        {
            str[i] = (char)(str[i] - 32);
        }
    }

    cout << str;
    return 0;
}