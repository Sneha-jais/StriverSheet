

#include <iostream>
using namespace std;
int main()
{

    int n;
        cout<<"Enter number of elements in array\n";
    cin >> n;

    int arr[n + 1];
      cout<<"Enter elements of array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cout << "Enter element which you want to insert at end\n";
    cin >> x;
    arr[n] = x;
    cout<<"Updated array is:\n";
    for (int i = 0; i <= n; i++)
        cout << arr[i]<<" ";
}
