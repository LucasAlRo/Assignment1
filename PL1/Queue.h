#ifndef QUEUE_H
#define QUEUE_H
#include "QueueNode.h"

class Queue
{
  private:
    QueueNode* front; // A pointer to the front of the queue
    QueueNode* rear;  // A pointer to the rear of the queue

  public:
    // Cosntructor and destructor
    Queue();
    ~Queue();

    // ADT methods for Queues
    void Enqueue(Student elem1, Project elem2); // Inserts the new element at the end of the queue
    QueueNode* Dequeue();                       // Removes the first element of the queue
    QueueNode* Front();                         // Returns the first element of the queue
    void makeNull();                            // Empties the queue
    bool isEmpty();                             // Chacks if the queue is empty
};

#endif // QUEUE_H
