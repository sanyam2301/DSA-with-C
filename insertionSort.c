#include <math.h>
#include <stdio.h>

void printArray(int arr[], int n)
{
int i;
for (i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");
}
void insertionSort(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++) {
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
printf("pass %d: ", i);
printArray(arr, 5);
}
}
int main()
{
int arr[] = { 69, 32, 25, 17, 9};
printf("Unsorted Array:");
for (int i = 0; i < 5; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
insertionSort(arr, 5);
printf("sorted array: ");
printArray(arr, 5);
return 0;
}