#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int index)
{
    if(index >= n)
        return -1;

    if(arr[index] == key)   
        return index;

    return linearSearch(arr, n, key, index + 1);   
}

int main()
{
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key, 0);

    if(result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;

    return 0;
}
