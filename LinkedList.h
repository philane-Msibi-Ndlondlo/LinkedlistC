#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE_STRUCT {
    int data;
    struct NODE_STRUCT* next;
} aNode;

aNode* init(void);

void add_node(aNode** head, int item);

void remove_node(aNode** head, int item);

void edit_node(aNode** head, int item, int replace_item);

void print(aNode** head);

void print_reverse(aNode* head);

#endif // LINKED_LIST_H
