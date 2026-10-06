#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert() 
{
    struct Node *newNode;
    int value;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Node inserted successfully.\n");
}
void deleteNode() 
{
    struct Node *temp;
    if (head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    temp = head;
    head = head->next;
    printf("Deleted value: %d\n", temp->data);
    free(temp);
}
void display() 
{
    struct Node *temp = head;
    if (head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int choice;
    do
    {
	 printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\nEnter your choice: ");
	scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                deleteNode();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}

