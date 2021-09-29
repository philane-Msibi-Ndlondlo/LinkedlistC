
#include <stdlib.h>
#include <stdio.h>
#include "Linkedlist.h"

void add_node(aNode** head, int item) {

    aNode* new_node = (aNode*)malloc(sizeof(aNode));
    new_node->data = item;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;

        printf("item %d was added to list\n", new_node->data);
    } else {

        aNode* curr = *head;

        while (curr->next != NULL) {
            curr = curr->next;
        }

        curr->next = new_node;
        printf("item %d was added to list\n", new_node->data);
        free(curr);
    }
}

void remove_node(aNode** head, int item) {

    if (*head == NULL) {
        printf("Unable to remove. List is empty. \n");
    } else {

        aNode* curr = *head;
        aNode* prev = NULL;
        aNode* delptr = NULL;

        while (curr->next != NULL && curr->data != item) {
            prev = curr;
            curr = curr->next;
        }

        delptr = curr;
        curr = curr->next;

        if (delptr == *head) {
            *head = curr;
        } else {
            prev->next = curr;
        }

        free(delptr);
        free(curr);
        free(prev);

        printf("item %d was removed from list\n", item);
    }
}

void edit_node(aNode** head, int item, int replace_item) {

    if (*head == NULL) {
        printf("Unable to Edit. List is Empty\n");
    } else {
        aNode* curr = *head;

        while (curr != NULL && curr->data != item) {
            curr = curr->next;
        }

        if (curr == NULL) {

            printf("Item %d was not found in list\n", item);
        } else {
            curr->data = replace_item;
            printf("\nItem Edited in list %d\n", curr->data);
        }
        free(curr);
    }
}

void print(aNode** head) {

    if (*head == NULL) {
        printf("List has no items\n");
    } else {

        aNode* curr = *head;

        while(curr != NULL) {
            printf("%d ",  curr->data);
            curr = curr->next;
        }
        printf("\n");
        free(curr);
    }

}

void print_reverse(aNode* head) {

    if(head == NULL) return;

    aNode* curr = head->next;

    print_reverse(curr);
    printf("%d ", head->data);
}
