#include<stdio.h>
#include<stdlib.h>
struct Node {
int data;
struct Node *prev;
struct Node *next;
};
struct Node *delHead(struct Node *head) {
if (head == NULL)
return NULL;
struct Node *temp = head;
head = head->next;
if (head != NULL)
head->prev = NULL;
free(temp);
return head;
}
void printList(struct Node *head) {
struct Node *curr = head;
while (curr != NULL) {
printf("%d ", curr->data);
curr = curr->next;
}
printf("\n");
}
struct Node *createNode(int data) {
struct Node *newNode = 
(struct Node *)malloc(sizeof(struct Node));
newNode->data = data;
newNode->prev = NULL;
newNode->next = NULL;
return newNode;
}
int main() {
struct Node *head = createNode(1);
head->next = createNode(2);
head->next->prev = head;
head->next->next = createNode(3);
head->next->next->prev = head->next;
head = delHead(head);
printList(head);
return 0;
}
