#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_SIZE 10000

int queue[MAX_SIZE];
// index of the first element in queue
int front = 0;
// index of the next element that will be added at the end of queue
int rear = 0;
// count the number of elements of queue
int count = 0;

int isEmpty() {
    return count == 0;
}

int isFull() {
    return count == MAX_SIZE;
}

int size() {
    return count;
}

void push(int v) {
    // push an element to the end of queue
    if(isFull()) printf("Queue is full. Can't be added more!\n");
    else {
        queue[rear] = v;
        rear = (rear + 1) % MAX_SIZE;
        count++;
    }
}

int get_front() {
    // return the first element of queue
    if(isEmpty()) return INT_MIN;
    else return queue[front];
}

int get_rear() {
    // return the last element of queue
    if(isEmpty()) return INT_MIN;
    else return queue[rear - 1];
}

int pop() {
    // remove the first element of queue and return its value
    if(isEmpty()) {
        printf("Queue is empty. Can't be popped.\n");
        return INT_MIN;
    }
    else {
        int v = queue[front];
        front = (front + 1) % MAX_SIZE;
        count--;
        return v;
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
    printf("%d ", pop());
    printf("%d", pop());
    printf("\n");
    printf("%d\n", size());    
}
