
#ifndef DLISTNODES_H
#define DLISTNODES_H
#include "Student.h"

class DListNodeS
{
  private:
    Student element;      // Element of the node
    DListNodeS* previous; // Pointer to the previous node
    DListNodeS* next;     // Pointer to the next node

  public:
    DListNodeS(Student u);
    ~DListNodeS();

    // Access methods
    DListNodeS* getNext();
    DListNodeS* getPrevious();
    Student getElement();

    void setNext(DListNodeS* listNxt);
    void setPrev(DListNodeS* listPrev);
    void setElement(Student listElem);
};

#endif // DLISTNODES_H
