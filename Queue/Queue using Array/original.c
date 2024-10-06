#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_SIZE 10000

int queue[MAX_SIZE];
// index of the first element in queue
int front = 0;
// index of the next element that will be added at the end of queue
int rear = 0;

int isEmpty() {
    return front == rear;
}

int isFull() {
    return rear == MAX_SIZE;
}

int size() {
    return rear - front;
}

void push(int v) {
    // push an element to the end of queue
    if(isFull()) printf("Queue is full. Can't be added more!\n");
    else {
        queue[rear] = v;
        rear++;
    }
}

int pop() {
    // remove the first element of queue and return its value
    if(isEmpty()) {
        printf("Queue is empty. Can't be popped.\n");
        return INT_MIN;
    }
    else {
        int v = queue[front];
        front++;
        return v;
    }
}

void printQueue() {
    // print queue from first to last
    if(isEmpty()) printf("Queue is empty. Can't print!\n");
    else {
        int t = front;
        while(t < rear) {
            printf("%d ", queue[t]);
            t++;
        }
    }
}

int main() {
    push(1);
    push(6);
    push(7);
    push(12);
    printf("\n");
    printf("%d\n", size());
    push(4);
    pop();
    pop();
    printf("\n");
    printf("%d\n", size());
    printQueue();      
}
