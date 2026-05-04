#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Utility function to insert a node at the beginning of the list
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to insert a new node into a sorted linked list
void sortedInsert(struct Node** sorted_ref, struct Node* new_node) {
    struct Node* current;
    
    // Special case for the head end
    if (*sorted_ref == NULL || (*sorted_ref)->data >= new_node->data) {
        new_node->next = *sorted_ref;
        *sorted_ref = new_node;
    } 
    else {
        // Locate the node before the point of insertion
        current = *sorted_ref;
        while (current->next != NULL && current->next->data < new_node->data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

// Function to sort a singly linked list using insertion sort
void insertionSort(struct Node** head_ref) {
    struct Node* sorted = NULL;
    struct Node* current = *head_ref;
    struct Node* next;

    // Traverse the given linked list and insert every node to 'sorted'
    while (current != NULL) {
        next = current->next; // Store next for next iteration
        sortedInsert(&sorted, current); // Insert current into sorted list
        current = next; // Update current
    }
    
    // Update head to point to the sorted linked list
    *head_ref = sorted;
}

// Utility function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Create a linked list: 5 -> 20 -> 4 -> 3 -> 30
    push(&head, 30);
    push(&head, 3);
    push(&head, 4);
    push(&head, 20);
    push(&head, 5);

    printf("Linked List before sorting:\n");
    printList(head);

    insertionSort(&head);

    printf("Linked List after sorting:\n");
    printList(head);

    return 0;
}   