
#include <iostream>
using namespace std;

int arr[20], B[8];
int n;
void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaximum array length is 20" << endl;
        }
    }

    cout << "\n-----------------------------" << endl;
    cout << "Enter array elements" << endl;
    cout << "-----------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index " << i << ": ";
        cin >> arr[i];
    }
}
// Function mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) // Base case
    {
        return;
    }

    int mid = (low + high) / 2;

    // Recursive calls - calling itself
    mergeSort(low, mid);
    mergeSort(mid + 1, high);

    // Merge process
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }
    // Copy remaining elements from the right sub-array
    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }









    
}
int main()
{
 




}


