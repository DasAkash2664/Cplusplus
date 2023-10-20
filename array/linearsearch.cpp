// Ques : Find a target value in an array.

// 1.normal method
/*#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    // input the target value
    int target;
    cout << "Enter the target value :";
    cin >> target;
    // set a flag
    bool flag = 0;
    // run linear search through the array arr
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Target found!! :)"<<endl;
    }
    else
    {
        cout << "Target not found!! :("<<endl;
    }

    return 0;
}*/
/*----------------------------------------------------------------*/
// 2.function method
#include <iostream>
using namespace std;
bool Lsearch(int arr[], int size, int target);
int main()
{
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int size = 25;
    // input the target value
    int target;
    cout << "Enter the target value : ";
    cin >> target;
    bool flag = Lsearch(arr,size,target);
    if (flag == 1)
    {
        cout << "Target found!! :)"<<endl;
    }
    else
    {
        cout << "Target not found!! :("<<endl;
    }
    return 0;
}
bool Lsearch(int arr[], int size, int target)
{
    // run linear search through the array arr
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
//~by Akash Das