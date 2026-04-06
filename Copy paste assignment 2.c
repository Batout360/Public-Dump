#1 PROGRAM TO CREATE AND DISPLAY LINKED LIST ELEMENTS
#include<stdio.h> // Standard input-output functions
#include<stdlib.h> // malloc(), exit() functions
// Definition of a node in the singly linked list
struct node{
int data; // Data part of the node
struct node *next; // Pointer to the next node
};
// START always points to the first node of the linked list, initialized to NULL
struct node *START = NULL;
// Function to create a new link list
struct node *create_list(struct node *START)
{
struct node *NEW_NODE, *PTR; // NEW_NODE for new node, PTR for traversal
int num;
printf("\nEnter -1 to end");
printf("\nEnter the data : ");
scanf("%d", &num);
// Loop continues until user enters -1
while(num != -1)
{
// Allocate memory for a new node
NEW_NODE = (struct node*)malloc(sizeof(struct node));
NEW_NODE->data = num; // Assign data to the node
// If the list is empty, make the new node the first node
if(START == NULL)
{
NEW_NODE->next = NULL;
START = NEW_NODE;
}
else
{
// Traverse the list to reach the last node
PTR = START;
while(PTR->next != NULL)
PTR = PTR->next;
// Insert the new node at the end
PTR->next = NEW_NODE;
NEW_NODE->next = NULL;
}
// Read next data value
printf("\nEnter the data : ");
scanf("%d", &num);
}
return START; // Return updated START pointer
}

// Function: display to display link list data
struct node *display(struct node *START)
{
struct node *PTR;
PTR = START;
// Check if the list is empty
if(PTR == NULL)
{
printf("\n Linked list is empty!");
}
else
{
printf("\nLINKED LIST DATA: ");
// Traverse the list and print each node's data
while(PTR != NULL)
{
printf("\t %d", PTR->data);
PTR = PTR->next;
}
}
return START;
}
int main()
{
int choice;
// Infinite loop to display menu repeatedly
while(1)
{
printf("\n\n*****************MAIN MENU*********************");
printf("\n1.Create a Linked List");
printf("\n2.Display a Linked List");
printf("\n3.Exit");
printf("\nSelect your choice:");
scanf("%d", &choice);
switch(choice)
{
case 1:
START = create_list(START); // Create linked list
printf("\nSINGLY LINKED LIST CREATED");
break;
case 2:
START = display(START); // Display linked list
break;
case 3:
exit(0); // Exit the program
}
}
return 0;}










//infixtopostfix

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char item) {
    if (top < MAX - 1) 
		stack[++top] = item;
}

char pop() {
    if (top >= 0) 
		return stack[top--];
    return -1;
}

// Higher priority *, /, % | Lower priority +, - [4]
int getPrecedence(char symbol) {
    if (symbol == '*' || symbol == '/' || symbol == '%') 
		return 2;
    if (symbol == '+' || symbol == '-') 
		return 1;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;
    char item, x;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    // Step 1: Add ")" to the end of the infix expression [3]
    strcat(infix, ")");
    
    // Step 2: Push "(" on to the stack [3]
    push('(');

    // Step 3: Repeat until each character is scanned [3]
    while (infix[i] != '\0') {
        item = infix[i];

        if (item == '(') {
            push(item); // If "(" is encountered, push it [3]
        } 
        else if (isalnum(item)) {
            postfix[j++] = item; // If operand, add it to postfix [3]
        } 
        else if (item == ')') {
            // If ")", pop until "(" is encountered [3]
            while ((x = pop()) != '(') {
                postfix[j++] = x;
            }
        } 
        else { 
            // If an operator is encountered, pop same or higher precedence [3]
            while (getPrecedence(stack[top]) >= getPrecedence(item)) {
                postfix[j++] = pop();
            }
            push(item); // Push the operator to the stack [3]
        }
        i++;
    }
    
    // Step 4: Pop until stack is empty [3]
    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}











//evaluatepostfix


#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int evalStack[MAX];
int evalTop = -1;

void evalPush(int item) {
    if (evalTop < MAX - 1) evalStack[++evalTop] = item;
}

int evalPop() {
    if (evalTop >= 0) return evalStack[evalTop--];
    return 0;
}

int main() {
    char postfix[MAX];
    int i = 0, A, B, result;
    char item;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    // Step 1: Add a ")" at the end of the postfix expression [1]
    int len = strlen(postfix);
    postfix[len] = ')';
    postfix[len + 1] = '\0';

    // Step 2: Scan every character until ")" is encountered [1]
    while (postfix[i] != ')') {
        item = postfix[i];

        if (isdigit(item)) {
            // Step 3: IF an operand is encountered, push it [1]
            evalPush(item - '0'); 
        } 
        else {
            // Step 3: IF an operator O is encountered [1]
            // a. Pop the top two elements as A and B
            A = evalPop(); // A is the topmost element
            B = evalPop(); // B is the element below A

            // b. Evaluate B O A [1]
            switch (item) {
                case '+': result = B + A; break;
                case '-': result = B - A; break;
                case '*': result = B * A; break;
                case '/': result = B / A; break;
                case '%': result = B % A; break; // Added support for modulus [2]
            }
            // c. Push the result of evaluation on the stack [1]
            evalPush(result);
        }
        i++;
    }

    // Step 4: SET RESULT equal to the topmost element of the stack [1]
    printf("Result of Evaluation: %d\n", evalPop());

    return 0;
}







//queue_with_array
#include <stdio.h>

#define MAX 5 // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

void insert(void);
int delete_element(void);
int peek(void);
void display(void);

int main() {
    int option, val;
    do {
        printf("\n\n ***** MAIN MENU *****");
        printf("\n 1. Insert an element (Enqueue)");
        printf("\n 2. Delete an element (Dequeue)");
        printf("\n 3. Peek");
        printf("\n 4. Display the queue");
        printf("\n 5. EXIT");
        printf("\n Enter your option : ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                insert();
                break;
            case 2:
                val = delete_element();
                if (val != -1)
                    printf("\n The number deleted is : %d", val);
                break;
            case 3:
                val = peek();
                if (val != -1)
                    printf("\n The first value in queue is : %d", val);
                break;
            case 4:
                display();
                break;
        }
    } while(option != 5);

    return 0;
}

// Function to add an element to the queue (Enqueue)
void insert() {
    int num;
    printf("\n Enter the number to be inserted in the queue : ");
    scanf("%d", &num);
    if(rear == MAX - 1) {
        printf("\n OVERFLOW"); // Queue is full [4]
    } else if(front == -1 && rear == -1) {
        front = rear = 0; // Set pointers for the first element [2]
        queue[rear] = num;
    } else {
        rear++; // Increment rear and store value [2]
        queue[rear] = num;
    }
}

// Function to remove an element from the queue (Dequeue)
int delete_element() {
    int val;
    if(front == -1 || front > rear) {
        printf("\n UNDERFLOW"); // Queue is empty [2, 3]
        return -1;
    } else {
        val = queue[front];
        front++; // Increment front to "remove" the element [3]
        if(front > rear) // Reset pointers if queue becomes empty
            front = rear = -1;
        return val;
    }
}

// Function to return the first element without deleting it
int peek() {
    if(front == -1 || front > rear) {
        printf("\n QUEUE IS EMPTY");
        return -1;
    } else {
        return queue[front];
    }
}

// Function to display all elements in the queue
void display() {
    int i;
    printf("\n");
    if(front == -1 || front > rear) {
        printf("\n QUEUE IS EMPTY");
    } else {
        for(i = front; i <= rear; i++)
            printf("\t %d", queue[i]);
    }
}