#include "DListP.h"

//____________Cosntructor and destructor____________

DListP::DListP()
{
    this->head = nullptr;
    this->tail = nullptr;
}

DListP::~DListP()
{
}

// Inserts the specified value at the specified position.
// If pos is negative, the value will be inserted at the front.
// If pos is bigger than the size, value will be appended to the DListP.

void DListP::Insert(Project element, int pos)
{
    // Create the new node to insert.
    DListNodeP* newNode = new DListNodeP(element);

    if(this->head == nullptr)
        {
            this->head = newNode;
            this->tail = newNode;
        }
    else
        {
            // Check for position 0 or smaller.
            if(pos <= 0)
                {
                    this->AddStart(newNode);
                }
            else
                {
                    DListNodeP* current = this->head;

                    int ctr = 0;
                    while((ctr < pos) && (current != nullptr))
                        {
                            current = current->getNext();
                            ctr++;
                        }

                    // Check if in bounds or out of bounds.
                    if(current == nullptr)
                        {
                            // Append to DListP.
                            this->Append(element);
                        }
                    else
                        {
                            // Add in specified position.
                            this->Add(newNode, current);
                        }
                }
        }
}

// ______________FUNCTIONS TO SIMPLIFY THE ABOVE FUNCTION__________________

// Add the new node at the end of the DListP.

void DListP::Append(Project newElement)
{
    DListNodeP* newNode = new DListNodeP(newElement);
    this->tail->setNext(newNode);
    newNode->setPrev(this->tail);
    this->tail = newNode;
}

Project DListP::checkInPosList(int position)
{
    DListNodeP* current = this->head;
    if(this->head != nullptr) // If DListP is not empty.
        {
            if(position == 0) // If DListP has only one element
                {
                    return current->getElement();
                }
            else
                {
                    int counter = 0;
                    // Iterate until specified position or out of bounds.
                    while((counter < position) && (current != nullptr))
                        {
                            current = current->getNext();
                            counter++;
                        }
                }
        }
    return current->getElement();
}
// Add the new node in the position of the current node specified.

void DListP::Add(DListNodeP* newNode, DListNodeP* current)
{
    newNode->setNext(current->getNext());
    newNode->getNext()->getPrevious()->setNext(newNode);
    newNode->setPrev(current);
    current->setNext(newNode);
}

// Inserts the new node at the beginning of the DListP.

void DListP::AddStart(DListNodeP* newNode)
{
    newNode->setNext(this->head);
    this->head->setPrev(newNode);
    this->head = newNode;
}

// Deleted the element from the specified position.
// This function will do nothing if position is out of bounds or empty DListP.

void DListP::Remove(int pos)
{
    if(this->head != nullptr) // If DListP is not empty.
        {
            if(this->head == this->tail) // If DListP has only one element.
                {
                    if(pos == 0)
                        {
                            this->EmptyRemove();
                        }
                }
            else // If DListP has more than one element.
                {
                    DListNodeP* current = this->head;

                    // No need to iterate. Already have access to head.
                    if(pos == 0)
                        {
                            this->HeadRemove(current);
                        }
                    else
                        {
                            int ctr = 0;
                            // Iterate until specified position or out of bounds.
                            while((ctr < pos) && (current != nullptr))
                                {
                                    current = current->getNext();
                                    ctr++;
                                }

                            // Make sure not out of bounds.
                            if(current != nullptr)
                                {
                                    // Special handling if last element.
                                    if(current == this->tail)
                                        {
                                            this->TailRemove(current);
                                        }
                                    else
                                        {
                                            this->RegularRemove(current);
                                        }
                                }
                        }
                }
        }
}

//_____________FUNCTIONS TO SIMPLIFY THE ABOVE FUNCTION_____________

// Removes an element and resets the DListP.
void DListP::EmptyRemove()
{
    delete(this->head);
    this->head = nullptr;
    this->tail = nullptr;
}

// Removes an element from the head when the DListP is size > 1.

void DListP::HeadRemove(DListNodeP* current)
{
    this->head->getNext()->setPrev(nullptr);
    this->head = this->head->getNext();
    delete(current);
}

// Removes an element from the tail of the DListP when the DListP is size > 1.

void DListP::TailRemove(DListNodeP* current)
{
    current->getPrevious()->setNext(nullptr);
    this->tail = current->getPrevious();
    delete(current);
}

// Removes an element from a position between 1 and size-2.

void DListP::RegularRemove(DListNodeP* current)
{
    current->getPrevious()->setNext(current->getNext());
    current->getNext()->setPrev(current->getPrevious());
    delete current;
}

//Checks if the list is empty
bool DListP::isEmpty()
{
    return this->head == nullptr;
}

//Returns the head of the list
DListNodeP* DListP::getHead()
{
    return this->head;
}