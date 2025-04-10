#include <bits/stdc++.h>
using namespace std;
int Partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partitionInd = Partition(arr, low, high);
        quickSort(arr, low, partitionInd - 1);
        quickSort(arr, partitionInd + 1, high);
    }
}
int main()
{
    cout << "Quick Sort" << endl;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n, 0);
    cout << "Enter the elements of the array : ";
    for (auto &it : arr)
        cin >> it;
    quickSort(arr, 0, n - 1);
    cout << "Elements of the array after sorting : ";
    for (auto &it : arr)
        cout << it << " ";
    return 0;
}