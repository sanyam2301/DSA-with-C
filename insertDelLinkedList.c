#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
void create_node()
{ //SANYAM JAIN CSE-E 36
    system("cls");
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space:\n");
        exit(0);
    }
    printf("\nEnter the data value for the node:\t");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    printf("Created Node\n");
    getch();
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("\nList is empty:\n");
        return;
    }
    else
    {
        ptr = start;
        printf("\nThe List elements are:\n");
        while (ptr != NULL)
        {
            printf("%d -> ", ptr->info);
            ptr = ptr->next;
        }
    }
    getch();
}
void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory\n");
        return;
    }
    printf("\nEnter the data value for the node:");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
    printf("Inserted");
    getch();
}
void insert_end()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory\n");
        return;
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }

    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
    printf("Inserted\n");
    getch();
}
void insert_by_pos()
{
    int i, pos;
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory\n");
        return;
    }
    printf("\nEnter the position for the new node to be inserted :");
    scanf("%d", &pos);
    printf("\nEnter the data value of the node:\t");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (pos == 0)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        for (i = 0, ptr = start; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("\nPosition not found:[Handle with care]\n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
    printf("Inserted\n");
    getch();
}
void delete_begin_node()
{
    struct node *ptr;
    if (ptr == NULL)
    {
        printf("\nList is Empty:\n");
        return;
    }
    else
    {
        ptr = start;
        start = start->next;

        printf("\nThe deleted element is :%d ", ptr->info);
        free(ptr);
    }
    getch();
}
void delete_end()
{
    struct node *temp, *ptr;
    if (start == NULL)
    {
        printf("\nList is Empty:");
        exit(0);
    }
    else if (start->next == NULL)
    {
        ptr = start;
        start = NULL;
        printf("\nThe deleted element is:%d ", ptr->info);
        free(ptr);
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        printf("\nThe deleted element is:%d ", ptr->info);
        free(ptr);
    }
    getch();
}
void delete_byposition()
{
    int i, pos;
    struct node *temp, *ptr;
    if (start == NULL)
    {
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted:\t");
        scanf("%d", &pos);
        pos--;
        if (pos == 0)
        {
            printf("Inserted\n");
            ptr = start;
            start = start->next;
            printf("\nThe deleted element is:%d ", ptr->info);
            free(ptr);
        }
        else
        {
            ptr = start;
            for (i = 0; i < pos; i++)
            {

                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("\nPosition not Found:\n");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("\nThe deleted element is:%d ", ptr->info);
            free(ptr);
        }
    }
    getch();
}
int main()
{
    int choice;
    while (1)
    {
        system("cls");
        printf("\nMENU\n");
        printf("\n 1.Create ");
        printf("\n 2.Display\n");
        printf("\nInsertion Menu\n");
        printf("\n 3.Insert at the beginning");
        printf("\n 4.Insert at the end");
        printf("\n 5.Insert at specified position\n");
        printf("\nDeletion Menu\n");
        printf("\n 6.Delete from beginning");
        printf("\n 7.Delete from the end");
        printf("\n 8.Delete from specified position");
        printf("\n 9.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        system("cls");
        switch (choice)
        {
        case 1:
            system("cls");
            create_node();
            break;
        case 2:
            system("cls");
            display();
            break;
        case 3:
            system("cls");
            insert_begin();
            break;
        case 4:
            system("cls");
            insert_end();
            break;
        case 5:
            system("cls");
            insert_by_pos();
            break;
        case 6:
            system("cls");
            delete_begin_node();

            break;
        case 7:
            system("cls");
            delete_end();
            break;
        case 8:
            system("cls");
            delete_byposition();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("\n Wrong Choice:\n");
            break;
        }
    }
    return 0;
}