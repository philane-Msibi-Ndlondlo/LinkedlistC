#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

int main()
{
    aNode* head = NULL;
    add_node(&head, 10);
    add_node(&head, 20);
    add_node(&head, 30);
    add_node(&head, 40);
    remove_node(&head, 10);
    add_node(&head, 50);
    print(&head);
    edit_node(&head, 20, 70);
    print(&head);
    print_reverse(head);
    return 0;
}
