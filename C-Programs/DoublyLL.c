
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insert()
{
    struct node *newnode, *temp;
    int value;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (head == NULL)
        head = newnode;
    else
    {
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
        newnode->prev = temp;
    }

    printf("Node inserted\n");
}

void delete()
{
    struct node *temp;

    if (head == NULL)
        printf("List is empty\n");
    else
    {
        temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        printf("Deleted: %d\n", temp->data);
        free(temp);
    }
}

void display()
{
    struct node *temp;

    if (head == NULL)
        printf("List is empty\n");
    else
    {
        temp = head;

        while (temp != NULL)
        {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. INSERT\n");
        printf("2. DELETE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
