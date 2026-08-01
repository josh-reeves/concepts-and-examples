#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

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

unsigned int Count(struct Node *node)
{
    unsigned int count = 0;

    while (node != NULL)
    {
        count++;

        node = node->next;

    }

    return count;

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

void Prepend(struct Node **target, void *data)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;

    PrependNode(target, node);  

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

void Append(struct Node **target, void *data)
{
    struct Node *node  = calloc(1, sizeof(struct Node));
    node->data = data;

    AppendNode(target, node);

}

void RemoveNode(struct Node **node)
{
    if ((*node)->prev != NULL)
    {
        (*node)->prev->next = (*node)->next;

    }

    if ((*node)->next != NULL)
    {
        (*node)->next->prev = (*node)->prev;

    }

    free(*node);

    *node = NULL;

}

void Remove(void *value, struct Node **node, bool (*compare)(void *, void *))
{
    while (node != NULL)
    {
        if (compare(value, (*node)->data))
        {
            RemoveNode(node);

            return;
            
        }

        node = &(*node)->next;

    }

}

void RemoveNodeAndChildren(struct Node **node)
{
    struct Node *cur = *node,
                *next = NULL;

    while (cur != NULL)
    {
        next = cur->next;

        free(cur);

        cur = next;

    }

    *node = NULL;

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

void RemoveFromList(struct LinkedList *list, void *value, bool (*compare)(void *, void *))
{
    struct Node **cur = &list->head;

    while (cur != NULL)
    {
        if (!compare(value, (*cur)->data))
        {
            cur = &(*cur)->next;

            continue;

        }

        if (cur == &list->head)
        {
            list->head = list->head->next;
            cur = &list->head->prev;

        }

        if (cur == &list->tail)
        {
            list->tail = list->tail->prev;

        }

        RemoveNode(cur);

        return;

    }
    
}

void DisposeOfList(struct LinkedList *list)
{
    RemoveNodeAndChildren(&list->head);

    list->head = NULL;
    list->tail = NULL;

}

void RemoveHead(struct LinkedList *list)
{
    if (list->head == NULL)
    {
        return;

    }

    struct Node *next = list->head->next;

    RemoveNode(&list->head);

    list->head = next;

}

void RemoveTail(struct LinkedList *list)
{
    if (list->tail == NULL)
    {
        return;

    }

    struct Node *prev = list->tail->prev;

    RemoveNode(&list->tail);

    list->tail = prev;

}

void LocateHead(struct LinkedList *list, struct Node *node)
{
    while (node->prev != NULL)
    {
        node = node->prev;

    }

    list->head = node;

}

void LocateTail(struct LinkedList *list, struct Node *node)
{
    while (node->next != NULL)
    {
        node = node->next;

    }

    list->tail = node;

}
