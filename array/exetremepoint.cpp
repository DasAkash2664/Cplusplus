// statement
#include <iostream>
using namespace std;

void extreme(int arr[], int size);
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cout << "input[" << i << "] = ";
        cin >> input[i];
    }
    extreme(input, size);
    return 0;
    return 0;
}

void extreme(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    cout << "The array in extreme point order : ";
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left];
            left++;
            right--;
        }
        else
        {
            swap(arr[left], arr[right]);
            cout << arr[left] << " " << arr[right]<<" ";
            left++;
            right--;
        }
    }
}
//~ by Akash Das