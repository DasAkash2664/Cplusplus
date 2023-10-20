// Print all the combination possible by the elements in the array.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int count = 4;
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }

    return 0;
}
//~ by Akash Das