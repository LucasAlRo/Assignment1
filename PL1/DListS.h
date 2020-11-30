#ifndef DLIST_H
#define DLIST_H
#include "DListNodeS.h"
#include "Student.h"

class DListS
{
  private:
    DListNodeS* head;
    DListNodeS* tail;

  public:
    DListS();
    ~DListS();

    void Insert(Student element, int pos); // Inserts a element on the list in a given position
    void Remove(int pos);                  // Removes a element of the list from a given position
    Student checkInPosList(int position);  // Retrieves the user in the given position without deleting it
    void MakeNull();                       // Makes the list empty
    bool isEmpty();                        // Checks if the list is empty

    // Auxiliary functions to Insert Function.
    void Append(Student newElement);
    void Add(DListNodeS* newnode, DListNodeS* current);
    void AddStart(DListNodeS* newNode);

    // Auxiliary functions to the Remove Function.
    void EmptyRemove();
    void RegularRemove(DListNodeS* current);
    void HeadRemove(DListNodeS* current);
    void TailRemove(DListNodeS* current);

    DListNodeS* getHead();
};

#endif // DLISTS_H