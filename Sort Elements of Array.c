#include <stdio.h>

void mySort(int a[], int n);
void main()
{
    int arr[10], n, i;
    printf("Enter Number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter Elements one by one\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    mySort(arr, n);
}

void mySort(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i]; a[i] = a[j]; a[j] = temp;
            }
        }
    }
    printf("Printing Sorted Element List ...\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}