#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 10
int insertq(int queue[max], int *front, int *rear, int data)
{
    if (*rear == max - 1)
        return (-1);
    else if (*front == -1)
    {
        *rear = 0;
        *front = 0;
        queue[*front] = data;
        return (1);
    }
    else
    {
        *rear = *rear + 1;
        queue[*rear] = data;
        return (1);
    } //SANYAM JAIN CSE-E 36
}
int delq(int queue[max], int *front, int *rear)
{
    if (*front == -1)
        return (-1);
    else if (*front == *rear)
    {
        *front = -1;
        *rear = -1;
    }
    else
    {
        *rear -= 1;
        for (int i = 0; i <= *rear; i++)
        {

            queue[i] = queue[i + 1];
        }
        return (1);
    }
}
void show(int q[max], int front, int rear)
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    for (i = front; i <= rear; i++)
    {
        printf(" %d <-- ", q[i]);
    }
    printf("\n");
    return;
}
int main()
{
    int queue[max], data;
    int front, rear, reply, option;
    front = rear = -1;
    system("cls");
    while (1)
    {
        printf("\n 1. Insert element in queue");
        printf("\n 2. Delete element from queue");
        printf("\n 3. Show Queue");
        printf("\n 4. Exit");
        printf("\nChoose operation : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter Number : ");
            scanf("%d", &data);
            printf("Queue Before : \n");
            show(queue, front, rear);
            reply = insertq(queue, &front, &rear, data);
            if (reply == -1)
                printf("Queue is full\n");
            else
                printf("%d is inserted in queue.\n", data);
            printf("Queue After : \n");
            show(queue, front, rear);
            printf("\n");
            getch();
            break;
        case 2:
            printf("Queue Before : \n");
            show(queue, front, rear);
            reply = delq(queue, &front, &rear);
            if (reply == -1)
                printf("Queue is empty\n");
            else
                printf("\nDeleted number \n");
            show(queue, front, rear);
            getch();

            break;
        case 3:
            show(queue, front, rear);
            getch();
            break;
        case 4:
            exit(0);
        }
    }
}