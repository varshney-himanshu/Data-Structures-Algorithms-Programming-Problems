#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'L')
        {
            x--;
        }
        if (str[i] == 'R')
        {
            x++;
        }
        if (str[i] == 'U')
        {
            y++;
        }
        if (str[i] == 'D')
        {
            y--;
        }
    }

    cout << x << " " << y;
    return 0;
}