#include <stdio.h>
#include <stdlib.h>
#define max_size 20

typedef struct newstack{
    int arr[max_size];
    int top;
} stack;

void initialize(stack *s) {
    s->top = -1;
}

int isEmpty(stack *s) {
    return s->top == -1;
}

int isFull(stack *s) {
    return s->top == max_size - 1;
}

void push(stack *s, int ele) {
    if (isFull(s)) {
        printf("Overflow\n");
        return;
    }s->top++;
    s->arr[s->top] = ele;
}

int pop(stack *s) {
    if (isEmpty(s)) {
        printf("Underflow\n");
        return -1;
    }
    int val = s->arr[s->top--];
    return val;
}

int main() {
    stack s;
    initialize(&s);

    push(&s, 4);
    push(&s, 8);
    push(&s, 10);

    int val = pop(&s);
    printf("%d\n", val);

    return 0;
}
