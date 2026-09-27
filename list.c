#include<stdio.h>
#include<stdlib.h>
    struct node
    {
        int data;
        struct node *next;
    };
    void main()
    {
        struct node *n1=(struct node*) malloc(sizeof(struct node));
        struct node *n2=(struct node*) malloc(sizeof(struct node));
        struct node *n3=(struct node*) malloc(sizeof(struct node));
        
        n1->data=10;
        n2->data=20;
        n3->data=30;

        n1->next=n2;
        n2->next=n3;
        n3->next=NULL;

        struct node *head=n1;
        struct node *temp=head;
        while(temp!=NULL)
        {
            printf("%d ->",temp->data);
            temp=temp->next;

        }
        printf("NULL");
        free(n1);
        free(n2);
        free(n3);
    }
