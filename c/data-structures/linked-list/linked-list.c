#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linked-list.h"

int main()
{
    int i;

    int data[5];
    
    struct LinkedList list = {NULL, NULL};

    srand(time(NULL));

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        data[i] = rand() % 100;

    }

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        AppendToList(&list, (void *)(&data[i]));

    }

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        PrependToList(&list, (void *)(&data[i]));

    }

    struct Node *current = list.head;
    
    i = 0;

    while (current != NULL)
    {
        printf("The value stored in node %i is %i.\n", i + 1, *(int *)(current->data));
        current = current->next;
        i++;

    }

    DisposeList(&list);

    return 0;

}