#include <iostream>
using namespace std;

int main()
{

    string str;
    cin >> str;
    double x = 0, y = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'z')
        {
            x++;
        }
        else if (str[i] == 'o')
        {
            y++;
        }
    }

    if (x == y / 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}