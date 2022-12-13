//Linear Search
#include <stdio.h>
int linearsearch(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            printf("Element found");
            count = 1;
        }
    }
    if (count == 0)
    {
        printf("Element not found");
    }

}


int main()
{
    int arr[] = { 30,3,5,7,10,40,50,60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    scanf("%d", &x);
    linearsearch(arr, n, x);
}
