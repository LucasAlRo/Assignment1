#ifndef DLISTP_H
#define DLISTP_H
#include "DListNodeP.h"
#include "Project.h"

class DListP
{
  private:
    DListNodeP* head;
    DListNodeP* tail;

  public:
    DListP();
    ~DListP();

    void Insert(Project element, int pos); // Inserts a element on the list in a given position
    void Remove(int pos);                  // Removes a element of the list from a given position
    Project checkInPosList(int position);  // Retrieves the user in the given position without deleting it
    void MakeNull();                       // Makes the list empty
    bool isEmpty();                        // Checks if the list is empty
    DListNodeP* getHead();                 // Returns the head of the list

    // Auxiliary functions to Insert Function.
    void Append(Project newElement);
    void Add(DListNodeP* newnode, DListNodeP* current);
    void AddStart(DListNodeP* newNode);

    // Auxiliary functions to the Remove Function.
    void EmptyRemove();
    void RegularRemove(DListNodeP* current);
    void HeadRemove(DListNodeP* current);
    void TailRemove(DListNodeP* current);
};

#endif // DLISTP_H
