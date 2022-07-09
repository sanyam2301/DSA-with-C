#include <stdio.h>
int pass = 0;
void swap(int* a, int* b) {
int t = *a;
*a = *b;
*b = t;
}
void printArray(int array[], int size) {
for (int i = 0; i < size; ++i) {
printf("%d ", array[i]);
}
printf("\n");
}
int partition(int array[], int low, int high) {
int pivot = array[high];
int i = (low - 1);
for (int j = low; j < high; j++) {
if (array[j] <= pivot) {
i++;
swap(&array[i], &array[j]);
}
}
swap(&array[i + 1], &array[high]);
printf("pass %d: ", ++pass);
printArray(array, 5);
printf("\n");
return (i + 1);
}
void quickSort(int array[], int low, int high) {
if (low < high) {
int pi = partition(array, low, high);
quickSort(array, low, pi - 1);
quickSort(array, pi + 1, high);
}
}

int main() {
int data[] = { 69, 37, 18, 12, 7};
printf("Unsorted Array: ");
printArray(data, 5);
quickSort(data, 0, 4);
printf("Sorted array: ");
printArray(data, 5);
}