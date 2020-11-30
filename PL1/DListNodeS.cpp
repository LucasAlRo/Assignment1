#include "DListNodeS.h"

DListNodeS::DListNodeS(Student element)
{
    this->element = element;
    this->previous = nullptr;
    this->next = nullptr;
}

DListNodeS::~DListNodeS()
{
}

//_____________Access Methods____________

DListNodeS* DListNodeS::getNext()
{
    return this->next;
}

DListNodeS* DListNodeS::getPrevious()
{
    return this->previous;
}

Student DListNodeS::getElement()
{
    return this->element;
}

void DListNodeS::setNext(DListNodeS* listNxt)
{
    this->next = listNxt;
}

void DListNodeS::setPrev(DListNodeS* listPrev)
{
    this->previous = listPrev;
}

void DListNodeS::setElement(Student listElem)
{
    this->element = listElem;
}