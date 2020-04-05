// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/

#include <iostream>
using namespace std;

int main()
{
    int l;
    cin >> l;

    int p;
    cin >> p;

    while (p--)
    {
        int w, h;
        cin >> w >> h;

        if (w < l || h < l)
        {
            cout << "UPLOAD ANOTHER";
        }

        else if (w == h)
        {
            cout << "ACCEPTED";
        }
        else
        {
            cout << "CROP IT";
        }
        cout << endl;
    }

    return 0;
}