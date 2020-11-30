#ifndef CORELOGIC_H
#define CORELOGIC_H

#import "DListP.h"
#import "DListS.h"
#import "Queue.h"
#import "Stack.h"

class CoreLogic
{
  public:
    CoreLogic();
    ~CoreLogic();

    void readSFile();
    void readPFile();

    void setQueue(Queue queue);
    void setStack(Stack stack);
    void setDListS(DListS listS);
    void setDListP(DListP listP);
    void projectAssignment();

    // Auxiliar functions for projectAssignment():
    void orderStudents();       // Orders the students list by mark
    void orderProjectsNumber(); // Orders the project list by number (in reverselistp)
    void orderProjectsDegree(); // Orders the project list by degree

    void stackProjects(); // Stores the projects of the list into a stack

    Queue getQueue();
    Stack getStack();
    DListP getDListP();
    DListS getDListS();
    bool searchElement(array<int, 10> list, int searchedElement);

  private:
    Queue queue;
    Stack stackPr;
    DListS dlists;
    DListP dlistp;
    DListP reverselistp;
};

#endif // CORELOGIC_H
