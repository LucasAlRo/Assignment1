#include "DListNodeP.h"

DListNodeP::DListNodeP(Project element)
{
    this->element = element;
    this->previous = nullptr;
    this->next = nullptr;
}

DListNodeP::~DListNodeP()
{
}

//_____________Access Methods____________

DListNodeP* DListNodeP::getNext()
{
    return this->next;
}

DListNodeP* DListNodeP::getPrevious()
{
    return this->previous;
}

Project DListNodeP::getElement()
{
    return this->element;
}

void DListNodeP::setNext(DListNodeP* listNxt)
{
    this->next = listNxt;
}

void DListNodeP::setPrev(DListNodeP* listPrev)
{
    this->previous = listPrev;
}

void DListNodeP::setElement(Project listElem)
{
    this->element = listElem;
}