// Sorting in singly linked list

#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *tail = NULL;
void addNode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
// sorting
void sort()
{
    struct node *current = head, *index = NULL;
    int temp;
    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current->next;
            while (index != NULL)
            {
                if (current->data > index->data){
                    temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}
}

// display() will display all the nodes present in the list
void display()
{
    // Node current will point to head
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is empty \n");
        return;
    }
    while (current != NULL)
    {
        // Prints each node by incrementing pointer
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    // Adds data to the list
    addNode(9);
    addNode(7);
    addNode(2);
    addNode(5);
    addNode(4);

    // Displaying original list
    printf("Original list: \n");
    display();

    // Sorting list
    sort();

    // Displaying sorted list
    printf("Sorted list: \n");
    display();

    return 0;
}
