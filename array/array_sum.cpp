// Ques : Take an array input and print sum.
#include <iostream>
using namespace std;

int main()
{
    // n is the no of elements of array
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    // take input of array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Array index  [" << i << "] : ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum of all the elements of array = "<<sum;
    return 0;
}