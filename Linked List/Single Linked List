#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} node;

node *makenode(int v) {
    node *p = (node *) malloc (sizeof(node));
    p->value = v;
    p->next = NULL;
    return p;
}

node *addfirst(int v, node *h) {
    node *q = makenode(v);
    if (h == NULL) return q;
    q->next = h;
    return q;
}

node *addlast(int v, node *h) {
    node *p = h;
    node *q = makenode(v);
    if (h == NULL) return q;
    while (p->next != NULL) p = p->next;
    p->next = q;
    return h;
}

void freelist(node *h) {
    if (h == NULL) return;
    freelist(h->next);
    free(h);
}

node *addbefore(int v, int u, node *h) {
    // add a node whose value = v before the first node whose value = u
    if (h == NULL) return h;
    if (h->value == u) {
        h = addfirst(v, h);
        return h;
    }
    h->next = addbefore(v, u, h->next);
    return h;
}

node *addafter(int v, int u, node *h) {
    // add a node whose value = v after the first node whose value = u
    if (h == NULL) return h;
    if (h->value == u) {
        h = addlast(v, h);
        return h;
    }
    node *p = h;
    while (p != NULL) {
        if (p->value == u) break;
        p = p->next;
    }
    if (p != NULL) {
        node *q = makenode(v);
        q->next = p->next;
        p->next = q;
    }
    return h;
}

node *dismiss(int v, node *h) {
    // remove a node whose value = v in linked list h
    if (h == NULL) return h;
    if (h->value == v) {
        node *p = h->next;
        free(h);
        return p;
    }
    h->next = dismiss(v, h->next);
    return h;
}

node *reverse(node *h) {
    if (h == NULL || h->next == NULL) return h;
    node *pp = NULL;
    node *np = NULL;
    node *p = h;
    while (p != NULL) {
        np = p->next;
        p->next = pp;
        pp = p;
        p = np;
    }
    return pp;
}

void printlist(node *h) {
    node *p = h;
    if (h == NULL) return;
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->next;
    }
}

int main()
{
    node *first = NULL;
    for (int i = 0; i <= 102; i++) first = addlast(i, first);
    first = addbefore(10000, 65, first);
    first = addafter(120139, 34, first);
    first = dismiss(10000, first);
    printlist(first);
    return 0;
}
