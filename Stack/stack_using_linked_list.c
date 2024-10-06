#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char value;
    struct node *next;
} node;

// the element at the top of the stack
node *top = NULL;

int isEmpty() {
// check if stack is empty or not
    return top == NULL;
}

node *makenode(char v) {
// make a new pointer to a new node
    node *p = (node *) malloc (sizeof(node));
    p->value = v;
    p->next = NULL;
    return p;
}

void pop() {
// remove the top node out of stack
    if(isEmpty()) printf("Stack is empty. There is nothing to pop!\n");
    else {
        node *p = top;
        char c = p->value;
        top = top->next;
        free(p);
    }
}

void printStack() {
    if(isEmpty()) printf("Stack is empty\n");
    else {
        node *p = top;
        while(p != NULL) {
            printf("%c", p->value);
            p = p->next;
        }
    }
}

void push(char c) {
// push a new node on top of stack
    node *p = makenode(c);
    p->next = top;
    top = p;
}

int compare(char a, char b) {
// compare if the open and close characters are compatible or not
    if (a == '{' && b == '}') return 1;
    if (a == '(' && b == ')') return 1;
    if (a == '[' && b == ']') return 1;
    return 0;
}

int check(char *s) {
// check if the arrangement given is correct or incorrect
    for (int i = 0; i < strlen(s); i++) {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(') push(s[i]);
        else {
            if (isEmpty()) return 0;
            else {
                char c = top->value;
                pop();
                int v = compare(c, s[i]);
                if (v == 0) return 0;
            }
        }
    }
    return isEmpty();
}
 
int main()
{
    char s[10000];
    scanf("%s", s);
    int key = check(s);
    printf("%d\n", key);
    return 0;
}
