#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// 2. Function to traverse and print the linked list
void traverseList(struct Node* head) {
    struct Node* current = head; // Initialize current with head

    printf("Linked List Elements: ");
    
    // Loop until the end of the list (NULL)
    while (current != NULL) {
        printf("%d -> ", current->data); // Print data of current node
        current = current->next;         // Move to the next node
    }
    printf("NULL\n");
}

// 3. Helper function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Driver code
int main() {
    // Creating nodes
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    // Linking nodes together
    head->next = second;
    second->next = third;

    // Performing traversal
    traverseList(head);

    // Free allocated memory to avoid leaks
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

