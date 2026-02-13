int pivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int element(vector<int> &arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    int p = pivot(arr, n);
    if (arr[p] <= k && k <= arr[n - 1])
    {
        s = p;
    }
    else
    {
        e = p - 1;
    }
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (k == arr[mid])
        {
            return mid;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int index = element(arr, n, k);
    return index;
}
