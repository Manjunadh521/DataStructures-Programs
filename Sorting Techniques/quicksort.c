//quick sort


#include<stdio.h>
void swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;


}

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (pivot >= arr[start])
            start++;
        while (pivot < arr[end])
            end--;
        if (start < end)
            swap(arr, start, end);

        swap(arr, lb, end);
        return end;

    }

}
int quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}
int main()
{
    int arr[] = { 10,8,21,24,55,36,72 };
    int lb = 0, ub = (sizeof(arr) / sizeof(arr[0])) - 1;
    quicksort(arr, lb, ub);
    for (int i = 0; i < ub + 1; i++)
        printf("%d\n", arr[i]);
}