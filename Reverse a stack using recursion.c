

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;


void push(int x) {
    if(top == MAX-1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}


int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}


int isEmpty() {
    return top == -1;
}


void insertAtBottom(int x) {
    if(isEmpty()) {
        push(x);
    } else {
        int temp = pop();
        insertAtBottom(x);
        push(temp);
    }
}


void reverseStack() {
    if(!isEmpty()) {
        int temp = pop();
        reverseStack();
        insertAtBottom(temp);
    }
}


void display() {
    if(isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for(int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
   
    push(1);
    push(2);
    push(3);
    push(4);

    printf("Original ");
    display();

    reverseStack();

    printf("Reversed ");
    display();

    return 0;
}
