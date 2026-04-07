
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
int main()
{
 




}


