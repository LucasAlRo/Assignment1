#include "Project.h"

Project::Project()
{
}
Project::Project(int number, string name, string degree, string description)
{
    this->number = number;
    this->name = name;
    this->degree = degree;
    this->description = description;
}

Project::~Project()
{
}

int Project::getNumber()
{
    return this->number;
}

string Project::getName()
{
    return this->name;
}

string Project::getDegree()
{
    return this->degree;
}

string Project::getDescription()
{
    return this->description;
}

void Project::setNumber(int number)
{
    this->number = number;
}

void Project::setName(string name)
{
    this->name = name;
}

void Project::setDegree(string degree)
{
    this->degree = degree;
}

void Project::setDescription(string description)
{
    this->description = description;
}
