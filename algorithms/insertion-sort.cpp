#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {5,
    //              2,
    //              4,
    //              6,
    //              1,
    //              3};

    // int length = sizeof(arr) / sizeof(arr[0]);

    int length;
    cin >> length;
    int arr[length];

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= length; i++)
    {
        int el = arr[i];

        int j = i - 1;
        while (j >= 0 && el < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = el;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}