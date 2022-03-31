#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10 // Number of nodes

typedef struct {
    int top, capacity; // DO NOT EDIT THIS LINE
    int *array;        // DO NOT EDIT THIS LINE
}STACK;

int GRAPH[N][N] = {
        /*       A   B   C   D   E   F   G   H   I   J  */
        /*A*/  { 0,  1,  1,  1,  0,  0,  0,  0,  0,  0},    // EDIT THIS LINE
        /*B*/  { 0,  0,  0,  0,  1,  0,  0,  0,  0,  0},    // EDIT THIS LINE
        /*C*/  { 0,  0,  0,  0,  0,  0,  0,  1,  0,  0},    // EDIT THIS LINE
        /*D*/  { 0,  0,  0,  0,  0,  0,  0,  0,  1,  0},    // EDIT THIS LINE
        /*E*/  { 0,  0,  0,  0,  0,  1,  1,  0,  0,  0},    // EDIT THIS LINE
        /*F*/  { 0,  0,  0,  0,  0,  0,  1,  0,  0,  0},    // EDIT THIS LINE
        /*G*/  { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},    // EDIT THIS LINE
        /*H*/  { 0,  0,  0,  0,  0,  0,  1,  0,  0,  1},    // EDIT THIS LINE
        /*I*/  { 0,  0,  0,  0,  0,  0,  0,  0,  0,  1},    // EDIT THIS LINE
        /*J*/  { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},    // EDIT THIS LINE
};

STACK *init_stack(int capacity);
void push(STACK *stack, int item);
int pop(STACK *stack);
int peek(STACK *stack);
int isFull(STACK *stack);
int isEmpty(STACK *stack);

void perform_topological_sort();
void topological_sort(int u, bool visited[], STACK *stack);

int main() {
    perform_topological_sort();
    return 0;
}

STACK *init_stack(int capacity) {
    STACK *stack = calloc(1, sizeof(*stack));
    if(stack == NULL){
        printf("Error:");
        exit(EXIT_FAILURE);
    }
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)calloc(1, stack->capacity * sizeof(int));
    return stack;
}

int isFull(STACK *stack){ return stack->top == stack->capacity - 1; }

int isEmpty(STACK *stack){ return stack->top == -1; }

void push(STACK *stack, int item){
    if(isFull(stack)) return;
    stack->array[++stack->top] = item;
}

int pop(STACK *stack){
    if(isEmpty(stack)) return -1;
    return stack->array[stack->top--];
}

int peek(STACK *stack){
    if(isEmpty(stack)) return -1;
    return stack->array[stack->top];
}

void topological_sort(int u, bool visited[], STACK *stack) {
	int v;
    visited[u] = true; // curr = visited

    for( v=0; v<N; v++){ // visit every node
        if(GRAPH[u][v]){
            if(!visited[v]){ // if not visited call recursion
                    topological_sort(v, visited, stack);
            }
        }
    }
    push(stack, u); // push visited to stack???
}

void perform_topological_sort() {
	int i, j;
    bool visited[N]; // visited list
    STACK *stack = init_stack(N); // solution stack
    for( i = 0; i<N; i++) { // ALL not visited
        visited[i] = false;
    }

    for( j = 0; j<N; j++)
        if(!visited[j]) {    //toposort all not visited
            topological_sort(j, visited, stack);
        }

    // Print???????????????????????????
    while(!isEmpty(stack)){
        printf("%c", peek(stack)+65);
        pop(stack);
    }
}
