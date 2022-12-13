//Selection Sort

#include<stdio.h>
void swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int main()
{
    int i, j, index, min;

    int arr[] = { 8,7,5,6,3,2,7,6 };
    //min=arr[0];
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        for (j = i; j < n; j++)
        {
            if (arr[j] <= min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap(arr, i, index);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}