
//Q.//////////// You are given an integer N. You need to print the series of all prime numbers till N.

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{

    if (num == 1)
    {
        return false;
    }
    else
    {
        bool prime = true;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }

        return prime;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}