#include <stdlib.h>
#include <stdio.h>
// double linked list code

typedef struct dnode {
    int value;
    struct dnode *prev, *next;
} dnode;

dnode *first;
dnode *last;

dnode *makenode(int v) {
    dnode *p = (dnode *) malloc (sizeof(dnode));
    p->prev = NULL;
    p->next = NULL;
    p->value = v;
    return p;
}

void addlast(int v) {
    dnode *p = makenode(v);
    if (first == NULL && last == NULL) {
        first = p;
        last = p;
        return;
    }
    p->prev = last;
    last->next = p;
    last = p;
}

void addfirst(int v) {
    dnode *p = makenode(v);
    if (first == NULL && last == NULL) {
        first = p;
        last = p;
    }
    p->next = first;
    first->prev = p;
    first = p;
}

void printfromfirst(dnode *first) {
    if (first == NULL) return;
    dnode *p = first;
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }
}

void printfromlast(dnode *last) {
    if (last == NULL) return;
    dnode *p = last;
    int i = 1;
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->prev;
    }
}

void addbefore(int v, dnode *p) {
    // add a node whose value = v before node p
    dnode *q = makenode(v);
    p->prev->next = q;
    q->prev = p->prev;
    q->next = p;
    p->prev = q;
}

void addadter(int v, dnode *p) {
    // add a node whose value = v before node p
    dnode *q = makenode(v);
    q->next = p->next;
    p->next->prev = q;
    p->next = q;
    q->prev = p;
}

void freelist() {
    if (first == NULL) return;
    freelist(first->next);
    free(first);
}

void dismiss(dnode *h) {
    // remove a pointer points to node h in double linked list
    if(first == last && h == first) {
        first = NULL;
        last = NULL;
        free(h);
    }
    h->prev->next = h->next;
    h->next->prev = h->prev;
}

int main()
{
    first = NULL;
    last = NULL;
    for (int i = 0; i <= 100; i++) addlast(i);
    printfromfirst(first);
    return 0;
}
