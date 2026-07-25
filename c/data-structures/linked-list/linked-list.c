#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

int main()
{
    struct LinkedList list = {NULL, NULL};

    int data[] = {1, 2, 3, 4, 5};

    int i = 0;

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        AppendToList(&list, (void *)(&data[i]));

    }

    struct Node *current = list.head;
    
    i = 0;

    while (current != NULL)
    {
        printf("The value stored in node %i is %i.\n", i + 1, *(int *)(current->data));
        current = current->next;
        i++;

    }

    return 0;

}