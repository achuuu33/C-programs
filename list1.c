#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createnode(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

struct node *insertatbeg(struct node *head, int val)
{
    struct node *newnode = createnode(val);
    newnode->next = head;
    head = newnode;
    return head;
}

struct node *insertatend(struct node *temp, int val)
{
    struct node *newnode = createnode(val);
    temp->next = newnode;
    temp = newnode;
    return temp;
}

struct node *insertatpos(struct node *head, int val, int pos)
{
    struct node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    struct node *newnode = createnode(val);
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

struct node *deleteatbeg(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct node *deleteatend(struct node *head)
{
    struct node *prev = NULL;
    struct node *temp = head;
    if (head == NULL)
        return head;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return head;
    }
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    return head;
}

struct node *deleteatpos(struct node *head, int pos)
{
    struct node *temp = head;
    struct node *prev = NULL;
    if (head == NULL)
        return head;
    if (pos == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    for (int i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("**INVALID POSITION**");
    }
    else
    {
        prev->next = temp->next;
        free(temp);
        return head;
    }
}

void display(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void main()
{

    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode;
    int n, val, pos;
    printf("Enter how many nodes:");
    scanf("%d", &n);
    printf("Enter values:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        newnode = createnode(val);
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("Enter a val for insertatbeg:");
    scanf("%d", &val);
    head = insertatbeg(head, val);

    printf("Enter a val for insertatend:");
    scanf("%d", &val);
    temp = insertatend(temp, val);

    printf("Enter a val for insertatpos:");
    scanf("%d", &val);
    printf("Enter the position:");
    scanf("%d", &pos);
    head = insertatpos(head, val, pos);

    display(head);

    printf("Deleteatbeg:\n");
    head = deleteatbeg(head);

    display(head);

    printf("Deleteatend:\n");
    head = deleteatend(head);

    display(head);

    printf("Enter a position to delete:");
    scanf("%d", &pos);
    head = deleteatpos(head, pos);

    display(head);
}