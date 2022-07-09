#include<stdio.h>
void swap(int* xp, int* yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
void printArray(int arr[], int size)
{
int i;
for (i = 0; i < size; i++)
printf("%d ", arr[i]);
printf("\n");
}
void selectionSort(int arr[], int n)

{
int i, j, min_idx;
for (i = 0; i < n - 1; i++)
{
min_idx = i;
for (j = i + 1; j < n; j++) {
if (arr[j] < arr[min_idx]) {
min_idx = j;
}
}
swap(&arr[min_idx], &arr[i]);
printf("pass %d: ", i + 1);
printArray(arr, 5);
}
}
int main()
{
int arr[] = { 35, 94, 25, 71, 69};
selectionSort(arr, 5);
printf("Sorted array: ");
printArray(arr, 5);
return 0;
}

