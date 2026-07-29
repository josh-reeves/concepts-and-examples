#include <stdlib.h>
#include <stdbool.h>

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

void RemoveNode(struct Node *node)
{
    if (node->prev != NULL)
    {
        node->prev->next = node->next;

    }

    if (node->next != NULL)
    {
        node->next->prev = node->prev;

    }

    free(node);

    node = NULL;

}

void RemoveAllNodes(struct Node **node)
{
    while (*node != NULL)
    {
        struct Node *next = (*node)->next;

        if ((*node)->prev != NULL)
        {
            (*node)->prev->next = NULL;

        }

        if ((*node)->next != NULL)
        {
            (*node)->next->prev = NULL;

        }

        free(*node);

        *node = NULL;
        *node = next;

    }

}

void Remove(void *value, struct Node *node, bool (*compare)(void *, void *))
{
    struct Node *cur = node;

    while (cur != NULL)
    {
        if (compare(value, cur->data) == true)
        {
            RemoveNode(cur);

            return;
            
        }

        cur = cur->next;

    }

}

void LocateHead(struct LinkedList *list, struct Node *node)
{
    while (node != NULL)
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
    struct Node *cur = list->head;

    while (cur != NULL)
    {
        if (!compare(value, cur->data) == true)
        {
            cur = cur->next;

            continue;

        }

        if (cur == list->head)
        {
            list->head = cur->next;

        }

        if (cur == list->tail)
        {
            list->tail = cur->prev;

        }

        RemoveNode(cur);

        return;

    }
    
}

void DisposeOfList(struct LinkedList *list)
{
    RemoveAllNodes(&list->head);

    list->head = NULL;
    list->tail = NULL;

}
