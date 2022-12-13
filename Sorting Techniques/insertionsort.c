//Insertion Sort

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
    int arr[] = { 5,7,6,3,4,9,0,11 }, temp, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        j = i;
        while (j < n)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
            }
            else if ((j != 0) && (arr[j - 1] > arr[j]))
            {
                swap(arr, j, j - 1);
                j--;
            }
            else
                break;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", arr[i]);

        }
        printf("\n");
    }
}