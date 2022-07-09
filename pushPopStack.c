#include<stdlib.h>
#include<stdio.h>
int top = -1;
int stack[100], n;
int push()
{
    int x;
    if (top == n - 1)
    {
        printf("overflow!!\n");
    }
    else
    { //SANYAM JAIN CSE-E 36
        printf("enter the data: ");
        scanf("%d", &x);
        top = top + 1;
        stack[top] = x;
    }
    return 0;
}
int pop()
{
    int a;
    if (top == -1)
    {
        printf("underflow !! \n");
    }

    else
    {
        printf("deleted element is: %d\n", stack[top]);
        top = top - 1;
    }
    return 0;
}
int display()
{
    int temp;
    temp = top;
    for (int i = temp; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    int c, ch;
    printf("enter the size of stack: ");
    scanf("%d", &n);
    printf("MAIN MENU\n1.PUSH\n2.POP\n");
    do
    {
        printf("enter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
        {
            push();
            display();
        }
        break;
        case 2:
        {
            pop();
            display();
        }
        break;
        }
        printf("do you want to continue?: ");
        scanf("%d", &ch);
    } while (ch == 1);
    printf("hence stack is:\n");
    display();
    return 0;
}