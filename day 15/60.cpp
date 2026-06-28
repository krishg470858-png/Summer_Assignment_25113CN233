
#include <iostream>
using namespace std;


void moveZeroes(int arr[], int n)
{
    int index = 0;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    moveZeroes(arr, n);

    return 0;
}