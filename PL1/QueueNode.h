
#ifndef QUEUENODE_H
#define QUEUENODE_H
#include "Project.h"
#include "Student.h"

class QueueNode
{
  private:
    QueueNode* next;
    Student queueData1;
    Project queueData2;
    friend class Queue;

  public:
    // Cosntructor methods
    QueueNode(Student queueData1, Project queueData2);
    ~QueueNode();

    // Access methods
    QueueNode* getNext();
    Student getStudent();
    Project getProject();
    void setNext(QueueNode* qNext);
    void setContent(Student qConts, Project qContp);
};

#endif // QUEUENODE_H
