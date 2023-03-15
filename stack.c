#include <stdio.h>

typedef struct stack {
    int items[100];
    int max;
    int top;
} STACK;

void display(STACK *stack);
void push(STACK *stack, int item);
void pop(STACK *stack);
void peek(STACK *stack);

int main(){
    STACK stack;
    printf("Enter number of elements: ");
    scanf("%d", &stack.max);
    stack.top = -1;
    
    int userin;
    while(userin!=5){
        printf("\n\n---- STACK ----");
        printf("\n(1) Diplay\n(2) Push\n(3) Pop\n(4) Peek\n(5) Quit\n");
        printf("Enter choice: ");
        scanf("%d", &userin);
        switch(userin){
            case 1:
                display(&stack);
                break;
            case 2:
                printf("Enter element to push to stack: ");
                int item; scanf("%d", &item);
                push(&stack, item);
                break;
            case 3:
                pop(&stack);
                break;
            case 4:
                peek(&stack);
                break;
            case 5:
                printf("Quitting...");
                break;
            default:
                printf("Invalid choice.");
        }
    }
    return 0;
}

void display(STACK *stack){
    if(stack->top == -1){
        printf("Stack is empty!");
        return;
    }
    for(int i=0; i<=stack->top; i++){
        printf("%d ", stack->items[i]);
    }
}

void push(STACK *stack, int item){
    if(stack->top >= stack->max){
        printf("Stack overflow!");
        return;
    }
    stack->top++;
    stack->items[stack->top] = item;
}

void pop(STACK *stack){
    if(stack->top == -1){
        printf("Stack underflow");
        return;
    }
    stack->top--;
}

void peek(STACK *stack){
    if(stack->top == -1){
        printf("Stack is empty");
        return;
    }
    printf("The top element is: %d", stack->items[stack->top]);
}