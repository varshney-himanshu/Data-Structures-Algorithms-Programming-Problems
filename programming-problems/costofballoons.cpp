//problem link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int cost__green, cost__purple, p, sum1 = 0, sum2 = 0;
        cin >> cost__green >> cost__purple;
        cin >> p;

        while (p--)
        {
            int prob1, prob2;
            cin >> prob1 >> prob2;
            if (prob1 == 1)
            {
                sum1 += cost__green;  //situation 1
                sum2 += cost__purple; //situation 2
            }
            if (prob2 == 1)
            {
                sum1 += cost__purple;
                sum2 += cost__green;
            }
        }
        if (sum1 < sum2)
        {
            cout << sum1;
        }
        else
        {
            cout << sum2;
        }
        cout << endl;
    }
}