
#include "Queue.h"
#include <cstddef>
//___________Constructors____________

Queue::Queue()
{
    this->front = nullptr;
    this->rear = nullptr;
}

Queue::~Queue()
{
}

//___________ADT Methods____________

void Queue::Enqueue(Student elem1, Project elem2) // Inserts a new element in the queue, at the rear
{
    QueueNode* newElem = new QueueNode(elem1, elem2);

    if(this->isEmpty())
        {
            this->front = newElem;
            this->rear = newElem;
        }
    else
        {
            this->rear->setNext(newElem);
            this->rear = newElem;
        }
}

QueueNode* Queue::Dequeue() // Removes the element at the front of the queue and returns it. This method will return
                            // null if the queue is empty.
{
    QueueNode* removed = this->front;
    QueueNode* obtained;

    if(this->front != NULL)
        {
            obtained = removed;
            this->front = removed->getNext();
            delete removed;
        }
    return obtained;
}

void Queue::makeNull() // Dequeues the queue until the front is a nullptr
{
    while(this->front != nullptr)
        {
            Dequeue();
        }
}

bool Queue::isEmpty() // Checks if the queue is empty
{
    return this->front == nullptr;
}