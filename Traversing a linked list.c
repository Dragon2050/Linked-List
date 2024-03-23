#include<stdio.h>

struct Node
{
    int data;
    struct Node* ptr;
};

struct Node* head;
struct Node* list;

void Insert(int val)
{
    struct Node* newNode;
    newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = val;
    if(list!=NULL)
        list->ptr = newNode;
    if(head==NULL)
        head = newNode;
    list = newNode;
    newNode->ptr = NULL;
}

void Traverse()
{
    list=head;
    printf("\n\nThe number of items are the below: \n");
    while(list!=NULL)
    {
        printf("%d\n",list->data);
        list = list->ptr;
    }
}

int main()
{
    head = NULL;
    list = NULL;
    int i,n,val;
    printf("Enter the number of item: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the value: ");
        scanf("%d",&val);
        Insert(val);
    }
    Traverse();
    return 0;
}
