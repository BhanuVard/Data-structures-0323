#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

typedef struct {
    char data[MAX_STACK_SIZE];
    int top;
} Stack;

void push(Stack *s, char c) {
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("Stack overflow!\n");
        exit(EXIT_FAILURE);
    }
    s->top++;
    s->data[s->top] = c;
}

char pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow!\n");
        exit(EXIT_FAILURE);
    }
    char c = s->data[s->top];
    s->top--;
    return c;
}

int precedence(char c) {
    switch (c) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infix_to_postfix(char *infix, char *postfix) {
    Stack s = { .top = -1 };
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        char c = infix[i];
        if (isalnum(c)) {
            postfix[j++] = c;
        } else if (c == '(') {
            push(&s, c);
        } else if (c == ')') {
            while (s.data[s.top] != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s);
        } else {
            while (s.top != -1 && precedence(c) <= precedence(s.data[s.top])) {
                postfix[j++] = pop(&s);
            }
            push(&s, c);
        }
        i++;
    }
    while (s.top != -1) {
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_STACK_SIZE];
    char postfix[MAX_STACK_SIZE];
    printf("Enter an infix expression: ");
    fgets(infix, MAX_STACK_SIZE, stdin);
    infix_to_postfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}

