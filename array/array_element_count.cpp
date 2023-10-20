// count the number of zero and one in an array.
#include <iostream>
using namespace std;

int arr[] = {0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1};
// zero => 9,one => 11
int size = 20;
void counter(int arr[], int size);
int main()
{

    counter(arr, size);
    return 0;
}
void counter(int arr[], int size)
{
    int zero_count = 0;
    int one_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
        else if (arr[i] == 1)
        {
            one_count++;
        }
    }
    cout << "Number of zeros = " << zero_count << endl;
    cout << "Number of ones = " << one_count << endl;
}
//~ by Akash Das