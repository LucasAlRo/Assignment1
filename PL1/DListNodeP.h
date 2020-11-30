#ifndef DListNodeP_H
#define DListNodeP_H
#include "Project.h"

class DListNodeP
{
  private:
    Project element;      // Element of the node
    DListNodeP* previous; // Pointer to the previous node
    DListNodeP* next;     // Pointer to the next node

  public:
    DListNodeP(Project u);
    ~DListNodeP();

    // Access methods
    DListNodeP* getNext();
    DListNodeP* getPrevious();
    Project getElement();

    void setNext(DListNodeP* listNxt);
    void setPrev(DListNodeP* listPrev);
    void setElement(Project listElem);
};

#endif // DListNodeP_H
