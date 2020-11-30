
#ifndef STACK_H
#define STACK_H
#include "Project.h"
#include "StackNode.h"

class Stack
{
  private:
    StackNode* top; // A pointer to the top of the stack
  public:
    Stack();
    ~Stack();

    // ADT Methods
    void Push(Project stackElem); // Push the element into the stack
    Project Pop();                // Removes the top element of the stack
    void makeNull();              // Makes the stack empty
    bool isEmpty();               // Checks if the stack is empty
    StackNode* getTop();          // Get the top of the stack
};

#endif // STACK_H
