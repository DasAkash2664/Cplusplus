// Find the smallest element in an array.
#include <iostream>
using namespace std;
void min_ele(int arr[], int size);
int main()
{
    int arr[] = {2, 5, 1, 9, 21, 69, -29, 23, 14, 0};
    int size = 10;
    min_ele(arr, size);
    return 0;
}
void min_ele(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The smallest element in the array is : " << min << endl;
}
//~ by Akash Das