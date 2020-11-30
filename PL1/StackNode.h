#ifndef STACKNODE_H
#define STACKNODE_H
#include "Project.h"

class StackNode
{
  private:
    StackNode* next; // A pointer to the next StackNode
    Project element; // The element of the stackNode
  public:
    // Constructor and destructor
    StackNode(Project stackElem);
    ~StackNode();

    // Access methods

    void setNext(StackNode* stackNext);
    void setElement(Project stackElem);
    StackNode* getNext();
    Project getElement();
};

#endif // STACKNODE_H
