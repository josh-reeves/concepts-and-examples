#include <stdlib.h>

struct Node
{
    void *data;
    struct Node *prev,
                *next;
    
};

struct LinkedList
{
    struct Node *head,
                *tail;

};

void Prepend(struct Node **target, void *data)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;

    if (*target == NULL)
    {
        *target = node;

        return;
        
    }

    (*target)->prev = node;
    node->next = *target;    

}

void PrependNode(struct Node **target, struct Node *node)
{
    if (*target == NULL)
    {
        *target = node;

        return;
        
    }

    (*target)->prev = node;
    node->next = *target;

}

void Append(struct Node **target, void *data)
{
    struct Node *node  = calloc(1, sizeof(struct Node));
    node->data = data;

    if (*target == NULL)
    {
        *target = node;

        return;
        
    }

    (*target)->next = node;
    node->prev = *target;

}

void AppendNode(struct Node **target, struct Node *node)
{
    if (*target == NULL)
    {
        *target = node;

        return;
        
    }

    (*target)->next = node;
    node->prev = *target;

}

void Dispose(struct Node *node)
{
    struct Node *current = node;

    while (current != NULL)
    {
        free(current);

        current = current->next;

    }

}

void PrependNodeToList(struct LinkedList *list, struct Node *node)
{
    PrependNode(&list->head, node);

    list->head = node;

    if (list->tail == NULL)
    {
        list->tail = list->head;

    }

}

void PrependToList(struct LinkedList *list, void *data)
{
    struct Node *node  = calloc(1, sizeof(struct Node));
    node->data = data;

    PrependNodeToList(list, node);

}

void AppendNodeToList(struct LinkedList *list, struct Node *node)
{
    AppendNode(&list->tail, node);

    list->tail = node;

    if (list->head == NULL)
    {
        list->head = list->tail;

    }

}

void AppendToList(struct LinkedList *list, void *data)
{
    struct Node *node  = calloc(1, sizeof(struct Node));
    node->data = data;

    AppendNodeToList(list, node);

}

void DisposeList(struct LinkedList *list)
{
    struct Node *current = list->head;

    Dispose(current);

    list->head = NULL;
    list->tail = NULL;

}


