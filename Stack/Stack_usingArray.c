#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1; //Yes stack is empty
    }
    return 0; //No stack is not empty
}

int isFull(struct stack * ptr){
    if(ptr->top == (ptr->size)-1){
        return 1; //Stack is Full
    }
    return 0; //Stack is not Full
}

void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size*sizeof(int));

    struct stack *s = (struct stack*)malloc(sizeof(struct stack)); //stack structure pointer
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));

    //Pushing an element manually
    // s->arr[0] = 7;
    // s->top++;
    // s->arr[1] = 8;
    // s->top++;
    // s->arr[2] = 9;
    // s->top++;
    
    //Check if the stack is empty or not
    if(isEmpty(s)){
        printf("Yes stack is empty!\n");
    }
    else{
        printf("Stack is not empty!\n");
    }

    printf("%d ",s->top);

    int n;
    printf("\nEnter the value to be pushed into the stack:- ");
    scanf("%d",&n);

    push(s,n);

    if(isEmpty(s)){
        printf("Yes stack is empty!\n");
    }
    else{
        printf("Stack is not empty!\n");
    }


    return 0;
}