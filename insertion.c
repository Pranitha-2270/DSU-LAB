#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
struct Node *prev;
};
void insertStart (struct Node **head, int data)
{
struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
newNode->data = data;
newNode->next = *head;
newNode->prev = NULL;
if (*head != NULL)
(*head)->prev = newNode;
 *head = newNode;
}
void display (struct Node *node)
{
struct Node *end;
printf ("List in Forward direction: ");
while (node != NULL)
{
printf (" %d ", node->data);
end = node;
node = node->next;
}
printf ("\nList in backward direction: ");
while (end != NULL)
{
printf (" %d ", end->data);
end = end->prev;
}
}
int main ()
{
struct Node *head = NULL;
insertStart (&head, 12);
insertStart (&head, 16);
insertStart (&head, 20);
display (head);
return 0;
}




