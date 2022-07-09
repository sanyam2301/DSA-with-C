#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main(void)
{
    int arr[] = {21, 34, 14, 15, 45};
    int x = 14;
    int result = binarySearch(arr, 0, 5, x);
    printf("The array is: ");
    for (int i = 0; i < 5; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\nYou searched for the element: %d\n\n", x);
    if (result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d", result + 1);
    }
    return 0;
}