// Print all the elements of an array in reverse order,
#include <iostream>
using namespace std;

void invert(int arr[], int size);
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"input["<<i<<"] = ";
        cin>>input[i];
    }
    invert(input, size);
    return 0;
}
// //swap method
// void invert(int arr[], int size)
// {
//     //swap elements
//     int left = 0;
//     int right = size - 1;
//     while (left < right)
//     {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     //print the array
//     cout<<"The array in reversed order : ";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// two array method
void invert(int input[], int size)
{
    // invert the elements and copy to an output array :
    int output[size];
    for (int i = 0; i < size; i++)
    {
        output[i] = input[size - 1 - i];
    }
    // print the inverted array
    cout << "The inverted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }
}

//~ by Akash Das