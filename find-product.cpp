#include <iostream>
using namespace std;

#define MOD 1000000007;
int main()
{
    long long int n;
    cin >> n;
    long long int answer = 1;
    for (int i = 0; i < n; i++)
    {
        long long int el;
        cin >> el;
        answer = (answer * el) % MOD;
    }

    cout << answer;
    return 0;
}