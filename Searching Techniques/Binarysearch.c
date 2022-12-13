//Binary Search

#include <stdio.h>
int binarysearch(int arr[], int lb, int ub, int x)
{

    int mid = (lb + ub) / 2;
    if (x == arr[mid])
    {
        printf("element found");
    }
    else if (x < arr[mid])
    {
        return binarysear..ll; l;;
    else if (x > arr[mid])
    {
        return binarysearch(arr, mid + 1, ub, x);
    }



    }


    int main()
    {
        int arr[] = { 10,20,30,40,50,60 };
        int n = sizeof(arr) / sizeof(arr[0]);
        int x, lb = 0;
        scanf("%d", &x);
        binarysearch(arr, lb, n - 1, x);
    }