#include<stdio.h>
#include<stdlib.h>
int queue[20];
int f = -1, r = -1;
int m;
int enqueue()
{
    int x, ch;
    printf("size of queue is: %d", m);
    do
    {
        printf("\nenter the data to be inserted/enqueued: ");
        scanf("%d", &x);
        if (f == -1 && r == -1)
        {
            r = 0;
            queue[r] = x;
            f = r;
        }
        else if (((r + 1) % m) == f)
        {
            printf("the queue is full\n\nOVERFLOW!!\n\n");
        }
        else
        {

            r = (r + 1) % m;
            queue[r] = x;
        }
        printf("do you want to insert more?: ");
        scanf("%d", &ch);
    } while (ch == 1);
    return 0;
}
int dequeue()
{
    int c;
    do
    {
        if (f == -1 && r == -1)
        {
            printf("queue is empty\n\nUNDERFLOW!!!\n\n");
            return 0;
        }
        else if (f == r)
        {
            printf("deleted element: %d\n", queue[f]);
            f = r = -1;
        }
        else
        {
            printf("deleted element: %d\n", queue[f]);
            f = (f + 1) % m;
        }
        printf("do you want to delete more?: ");
        scanf("%d", &c);
    } while (c == 1);
    return 0;
}
int delete ()
{ //SANYAM JAIN CSE-E 36
    int i, c, ele;
    int flag = 0;
    c = 0;
    printf("the queue is:\n");

    i = f;
    while (i != r)
    {
        c = c + 1;
        i = (i + 1) % m;
    }
    c = c + 1;
    printf("no. of elements in the queue at present are: %d\n", c);
    printf("enter the element you want to delete: ");
    scanf("%d", &ele);
    i = f;
    while (queue[i] != ele)
    {
        i = (i + 1) % m;
        f = i;
    }
    if (i == r)
    {
        f = r = -1;
    }
    else

    {
        f = (f + 1) % m;
    }
    return 0;
}
int display()
{
    int i;
    i = f;
    while (i != r)
    {
        printf("%d ", queue[i]);
        i = (i + 1) % m;
    }
    printf("%d ", queue[r]);
    printf("\n");
    return 0;
}
int main()
{
    int n, c;
    printf("enter the size of queue: ");
    scanf("%d", &m);
    printf("push elements into the queue\n");
    enqueue(m);
    printf("MAIN MENU\n1.INSERTION\n2.DELETION\n");
    printf("3.DELETION OF A PARTICULAR ELEMENT\n");
    do
    {
        printf("enter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            enqueue();
            display();
        }
        break;
        case 2:
        {
            dequeue();
            display();
        }
        break;
        case 3:
        {
            delete ();
            display();
        }
        break;
        }
        printf("do you want to continue?: ");
        scanf("%d", &c);
    } while (c == 1);
    printf("hence the queue is:\n");
    display();
    return 0;
}