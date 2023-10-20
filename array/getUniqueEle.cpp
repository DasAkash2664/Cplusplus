// Find the one unique element in the array.
#include <iostream>
using namespace std;

int getUnique(int arr[], int n);
int main()
{
    int arr[] = {2, 10, 11, 10, 2, 13, 15, 13, 15};
    int n = 9;

    int finalAns = getUnique(arr, n);
    cout << "Unique element is: " << finalAns << endl;
    return 0;
}

int getUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

//~ by Akash Das