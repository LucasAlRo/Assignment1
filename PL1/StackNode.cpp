#include "StackNode.h"

//____________Cosntructor and destructor_______________

StackNode::StackNode(Project stackElem)
{
    this->element = stackElem;
    this->next = nullptr;
}

StackNode::~StackNode()
{
}

//____________Access Methods_______________

void StackNode::setNext(StackNode* stackNext)
{
    this->next = stackNext;
}

void StackNode::setElement(Project stackElem)
{
    this->element = stackElem;
}

StackNode* StackNode::getNext()
{
    return this->next;
}

Project StackNode::getElement()
{
    return this->element;
}
