#include <iostream>
using namespace std;

int no_of_elements_to_sum(int rem)

{

    int prevValue = 0;
    int sum = 0;
    for (int i = 1; sum <= rem; i++)
    {
        prevValue = sum;
        sum = (i * (i + 1)) / 2;
    }
    return prevValue;
}

int indexSum(int *arr, int index, int len)
{

    int sum = 0;
    int i = 1;
    int it = no_of_elements_to_sum(len - index);
    while (i <= it)
    {
        sum = sum + arr[index];
        index++;
        i++;
    }

    return sum;
}

// int indexSum(int *arr, int index, int len)
// {

//     int i = index;
//     int n = 1;
//     int sum = 0;

//     while (i < len)
//     {
//         if ((len - i) >= n)
//         {
//             for (int j = 0; j < n; j++) //1, 2, 4, 6, 7
//             {
//                 sum = sum + arr[i];
//                 i++;
//             }
//             n++;
//         }
//         else
//         {
//             return sum;
//         }
//     }
//     return sum;
// }

int main()
{
    int len;
    cin >> len;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    int gs = 0;
    for (int i = 0; i < len; i++)
    {
        int sum = indexSum(arr, i, len);
        if (sum > gs)
        {
            gs = sum;
        }
    }

    cout
        << gs;

    return 0;
}