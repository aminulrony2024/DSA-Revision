#include <bits/stdc++.h>
using namespace std;
void Merge(vector<int> &arr, int low, int high)
{
    vector<int> temp;
    int mid = (low + high) / 2;
    int i = low;
    int j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= high)
        temp.push_back(arr[j++]);
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    Merge(arr, low, high);
}
int main()
{
    cout << "Merge Sort" << endl;
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> arr(n, 0);
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    cout << "Elements of the array after Merge Sort : ";
    for (auto &it : arr)
        cout << it << " ";
    return 0;
}