#include<stdio.h>
int main()
{
    int a[50];
    int n, e, b, choice, pos;
    int ch, ch1, m;
    printf("enter the size of array\n");
    scanf("%d", &n);
    printf("enter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the array is\n");
    for (int j = 0; j < n; j++)

    {//SANYAM JAIN CSE-E 36
        printf("%d ", a[j]);
    }
    printf("\n");
    printf("MAIN MENU\n");
    printf("1. insertion\n");
    printf("2. deletion\n");
    do
    {
        printf("enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            do
            {
                printf("at what position do you want to enter\n");
                scanf("%d", &e);
                printf("enter the element you want to enter\n");
                scanf("%d", &b);
                for (int k = n; k >= e; k--)
                {
                    a[k] = a[k - 1];
                }
                a[e - 1] = b;
                n = n + 1;
                printf("array is\n");
                for (int l = 0; l < n; l++)
                {
                    printf("%d ", a[l]);
                }
                printf("do you want to enter more?\n");
                scanf("%d", &ch1);
            } while (ch1 == 1);
        }
        break;
        case 2:
        {
            do
            {
                printf("position to be deleted?\n");
                scanf("%d", &pos);
                a[pos - 1] = 0;
                for (int z = pos - 1; z < n; z++)
                {
                    a[z] = a[z + 1];
                }
                n = n - 1;
                printf("array is\n");
                for (int l = 0; l < n; l++)
                {
                    printf("%d ", a[l]);
                }
                printf("do you want to delete more?\n");
                scanf("%d", &ch1);
            } while (ch1 == 1);
        }
        break;
        }
        printf("do you want to continue?: ");
        scanf("%d", &m);
    } while (m == 1);

    printf("therefore final array is\n");
    for (int l = 0; l < n; l++)
    {
        printf("%d ", a[l]);
    }
    return 0;
}