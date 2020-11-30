#include "Student.h"
#include <array>

Student::Student()
{
} // Dummy student
Student::Student(string id, float mark, array<int, 10> projects)
{
    this->id = id;
    this->mark = mark;
    this->requestedProjects = projects;
}

Student::~Student()
{
}

string Student::getId()
{
    return this->id;
}

float Student::getMark()
{
    return this->mark;
}

array<int, 10> Student::getProjects()
{
    return this->requestedProjects;
}

void Student::setId(string id)
{
    this->id = id;
}

void Student::setMark(float mark)
{
    this->mark = mark;
}

void Student::setProjects(array<int, 10> projects)
{
    this->requestedProjects = projects;
}