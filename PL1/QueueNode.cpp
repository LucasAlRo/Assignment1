
#include "QueueNode.h"
//_________Cosntructor_________

QueueNode::QueueNode(Student queueData1, Project queueData2)
{
    this->queueData1 = queueData1;
    this->queueData2 = queueData2;
    this->next = nullptr;
}

QueueNode::~QueueNode()
{
}

//________Access Methods________

QueueNode* QueueNode::getNext() // Gets the next element of the queue
{
    return this->next;
}

Student QueueNode::getStudent()
{
    return this->queueData1;
}

Project QueueNode::getProject()
{
    return this->queueData2;
}

void QueueNode::setNext(QueueNode* qNext)
{
    this->next = qNext;
}

void QueueNode::setContent(Student qCont, Project qCont2)
{
    this->queueData1 = qCont;
    this->queueData2 = qCont2;
}