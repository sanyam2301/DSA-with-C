#include <stdio.h>
#include <stdio.h>

int main()
{
    int a[50];
    int num, temp, ch;
    int flag = 0;
    printf("Number of elements in array: ");
    scanf("%d", &num);
    printf("Enter the array: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    } //SANYAM JAIN CSE-E 36
    printf("Enter the number to be searched: ");
    scanf("%d", &temp);
    for (int j = 0; j < num; j++)
    {
        if (a[j] == temp)
        {
            printf("element %d found at position %d \n", temp, j + 1);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("element not found\n");
    }
    return 0;
}