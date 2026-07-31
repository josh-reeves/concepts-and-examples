#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linked-list.h"
#include <stdbool.h>

bool CompareIntegers(void *num1, void *num2);

int main()
{
    int i;

    int data[50];
    
    struct LinkedList list = {NULL, NULL};

    srand(time(NULL));

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        data[i] = rand() % 100;
        AppendToList(&list, (void*)&data[i]);

    }

    struct Node **cur = &list.head;

    PrependToList(&list, (void*)&(int){5});

    printf("The number of nodes in the list is now %i.\n", Count(list.head));
    printf("The value stored in the head node is now %i.\n", *(int *)(list.head->data));
    printf("The value stored in the tail node is now %i.\n", *(int *)(list.tail->data));

    for (i = 1; *cur != NULL; i++)
    {
        printf("The value stored in node %i is %i.\n", i, *(int *)((*cur)->data));
        cur = &(*cur)->next;

    }

    Remove((void*)&(int){5}, &list.head, CompareIntegers);

    if (list.head == NULL)
    {
        LocateHead(&list, list.tail);

    }

    printf("The number of nodes in the list is now %i.\n", Count(list.head));
    printf("The value stored in the head node is now %i.\n", *(int *)(list.head->data));
    printf("The value stored in the tail node is now %i.\n", *(int *)(list.tail->data));

    struct Node *insert = calloc(1, sizeof(struct Node));
    insert->data = (void*)&(int){5};

    PrependNodeToList(&list, insert);

    printf("The number of nodes in the list is now %i.\n", Count(list.head));
    printf("The value stored in the head node is now %i.\n", *(int *)(list.head->data));
    printf("The value stored in the tail node is now %i.\n", *(int *)(list.tail->data));

    RemoveFromList(&list, (void*)&(int){5}, CompareIntegers);

    printf("The number of nodes in the list is now %i.\n", Count(list.head));
    printf("The value stored in the head node is now %i.\n", *(int *)(list.head->data));
    printf("The value stored in the tail node is now %i.\n", *(int *)(list.tail->data));

    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++)
    {
        struct Node *node = calloc(1, sizeof(struct Node));
        node->data = data;

        AppendNodeToList(&list, node);

    }

    DisposeOfList(&list);

    printf("The number of nodes in the list is now %i.\n", Count(list.head));

    return 0;

}

bool CompareIntegers(void *num1, void *num2)
{
    if (*(int*)num1 == *(int*)num2)
    {
        return true;

    }

    return false;

}