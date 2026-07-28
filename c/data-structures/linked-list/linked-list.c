#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linked-list.h"
#include <stdbool.h>

bool compareIntegers(void *num1, void *num2);

int main()
{
    int i;

    int data[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int randomData[5];
    
    struct LinkedList list = {NULL, NULL};

    srand(time(NULL));

    for (i = 0; i < sizeof(randomData) / sizeof(randomData[0]); i++)
    {
        randomData[i] = rand() % 100;

    }

    for (i = 0; i < sizeof(randomData) / sizeof(randomData[0]); i++)
    {
        AppendToList(&list, (void *)(&randomData[i]));

    }

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        AppendToList(&list, (void *)(&data[i]));

    }

    struct Node *current = list.head;

    printf("The number of nodes in the list is now %i.\n", Count(list.head));
    printf("The value stored in the head node is now %i.\n", *(int *)(list.head->data));
    printf("The value stored in the tail node is now %i.\n", *(int *)(list.tail->data));

    for (i = 1; current != NULL; i++)
    {
        printf("The value stored in node %i is %i.\n", i, *(int *)(current->data));
        current = current->next;

    }

    printf("Removing the first node containing 5.\n");
    Remove((void *)&(int){5}, list.head, compareIntegers);
    printf("The number of nodes in the list is now %i.\n", Count(list.head));

    current = list.tail;

    i = Count(list.head);

    while (current != NULL)
    {
        printf("The value stored in node %i is %i.\n", i, *(int *)(current->data));
        current = current->prev;

        i--;

    }

    current = list.head;

    printf("Removing any nodes containing 25 and all children.\n");
    while (current != NULL)
    {
        if (*(int *)(current->data) == 25)
        {
            RemoveAllNodes(&current);

            break;

        }

        current = current->next;

    }

    LocateTail(&list, list.head);

    printf("The number of nodes in the list is now %i.\n", Count(list.head));
    printf("The value stored in the head node is now %i.\n", *(int *)(list.head->data));
    printf("The value stored in the tail node is now %i.\n", *(int *)(list.tail->data));    

    current = list.head;

    for (i = 1; current != NULL; i++)
    {
        printf("The value stored in node %i is %i.\n", i, *(int *)(current->data));
        current = current->next;

    }

    DisposeOfList(&list);

    return 0;

}

bool compareIntegers(void *num1, void *num2)
{
    if (*(int *)num1 == *(int *)num2)
    {
        return true;

    }

    return false;

}