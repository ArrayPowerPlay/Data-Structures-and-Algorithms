#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000

int queue[MAX_SIZE];
// index of the first element in queue
int front = 0;
// index of the next element that will be added at the end of queue
int rear = 0;
// count the number of elements of queue
int Size() {
    return rear - front;
}

int isEmpty() {
    return Size() == 0;
}

int isFull() {
    return Size() == MAX_SIZE;
}

void push_rear(int v) {
    // push an element to the end of queue
    if(isFull()) printf("Queue is full. Can't be added more!\n");
    else queue[rear++] = v;
}

void push_front(int v) {
    // push an element to the front of queue
    if(isFull()) printf("Queue is full. Can't be added more!\n");
    if(Size() == 0) push_rear(v);
    else {
        for(int i = rear; i > front; i--) queue[i] = queue[i - 1];
        queue[front] = v;
        rear++;
    }
}

int pop_rear() {
    // remove the element at the end queue and return its value
    if(isEmpty()) {
        printf("Queue is empty. Can't be popped.\n");
        return -999;
    }
    else return queue[--rear];
}

int pop_front() {
    // remove the element at the front of queue and return its value
    if(isEmpty()) {
        printf("Queue is empty. Can't be popped.\n");
        return -999;
    }
    else return queue[front++];
}

int get_rear() {
    if(isEmpty()) printf("Queue is empty\n");
    else return queue[rear - 1];
}

int get_front() {
    if(isEmpty()) printf("Queue is empty\n");
    else return queue[front];
}

void print_queue_from_front() {
    if(isEmpty()) printf("Queue is empty\n");
    else for (int i = front; i < rear; i++) printf("%d ", queue[i]);
}

void print_queue_from_last() {
    if(isEmpty()) printf("Queue is empty\n");
    else for (int i = rear - 1; i >= front; i--) printf("%d ", queue[i]);
}

int main() {
    push_rear(1);
    push_front(2);
    push_front(8);
    printf("%d\n", Size());
    push_rear(12);
    push_rear(3);
    print_queue_from_last();
    printf("\n");
    pop_front();
    pop_rear();
    pop_rear();
    print_queue_from_front();
    printf("\n");
    printf("%d\n", Size());
    return 0;
}
