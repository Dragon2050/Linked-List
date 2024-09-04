#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;
struct node* current = NULL;
int cnt;

void Insert(int in_val)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->val = in_val;
    new_node->next = NULL;
    if(head == NULL){
        head = new_node;
        cnt++;
    }
    if(current!=NULL)
        current->next = new_node;
    current = new_node;
}

void Traverse()
{
    current = head;
    while(current!=NULL)
    {
        printf("%d\t",current->val);
        current = current->next;
    }
    printf("\n");
}

void Insert_First_Position(int value)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->val = value;
    new_node->next = head;
    head = new_node;
}

int main()
{
    int n,i,value,insert_val;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&insert_val);
        Insert(insert_val);
    }
    Traverse();
    scanf("%d",&value);
    Insert_First_Position(value);
    Traverse();
    return 0;
}
