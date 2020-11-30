#include "DListS.h"

//____________Cosntructor and destructor____________

DListS::DListS()
{
    this->head = nullptr;
    this->tail = nullptr;
}

DListS::~DListS()
{
}

// Inserts the specified value at the specified position.
// If pos is negative, the value will be inserted at the front.
// If pos is bigger than the size, value will be appended to the DListS.

void DListS::Insert(Student element, int pos)
{
    // Create the new node to insert.
    DListNodeS* newNode = new DListNodeS(element);

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
                    DListNodeS* current = this->head;

                    int ctr = 0;
                    while((ctr < pos) && (current != nullptr))
                        {
                            current = current->getNext();
                            ctr++;
                        }

                    // Check if in bounds or out of bounds.
                    if(current == nullptr)
                        {
                            // Append to DListS.
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

// Add the new node at the end of the DListS.

void DListS::Append(Student newElement)
{
    DListNodeS* newNode = new DListNodeS(newElement);
    this->tail->setNext(newNode);
    newNode->setPrev(this->tail);
    this->tail = newNode;
}

Student DListS::checkInPosList(int position)
{
    DListNodeS* current = this->head;
    if(this->head != nullptr) // If DListS is not empty.
        {
            if(position == 0) // If DListS has only one element
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

void DListS::Add(DListNodeS* newNode, DListNodeS* current)
{
    newNode->setNext(current->getNext());
    newNode->getNext()->getPrevious()->setNext(newNode);
    newNode->setPrev(current);
    current->setNext(newNode);
}

// Inserts the new node at the beginning of the DListS.

void DListS::AddStart(DListNodeS* newNode)
{
    newNode->setNext(this->head);
    this->head->setPrev(newNode);
    this->head = newNode;
}

// Deleted the element from the specified position.
// This function will do nothing if position is out of bounds or empty DListS.

void DListS::Remove(int pos)
{
    if(this->head != nullptr) // If DListS is not empty.
        {
            if(this->head == this->tail) // If DListS has only one element.
                {
                    if(pos == 0)
                        {
                            this->EmptyRemove();
                        }
                }
            else // If DListS has more than one element.
                {
                    DListNodeS* current = this->head;

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

// Removes an element and resets the DListS.
void DListS::EmptyRemove()
{
    delete(this->head);
    this->head = nullptr;
    this->tail = nullptr;
}

// Removes an element from the head when the DListS is size > 1.

void DListS::HeadRemove(DListNodeS* current)
{
    this->head->getNext()->setPrev(nullptr);
    this->head = this->head->getNext();
    delete(current);
}

// Removes an element from the tail of the DListS when the DListS is size > 1.

void DListS::TailRemove(DListNodeS* current)
{
    current->getPrevious()->setNext(nullptr);
    this->tail = current->getPrevious();
    delete(current);
}

// Removes an element from a position between 1 and size-2.

void DListS::RegularRemove(DListNodeS* current)
{
    current->getPrevious()->setNext(current->getNext());
    current->getNext()->setPrev(current->getPrevious());
    delete current;
}

bool DListS::isEmpty()
{
    return this->head == nullptr;
}

DListNodeS* DListS::getHead()
{
    return this->head;
}