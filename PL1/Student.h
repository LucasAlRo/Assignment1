#ifndef STUDENT_H
#define STUDENT_H
#include <array>
#include <string>
using namespace std;

class Student
{
  private:
    string id;
    float mark;
    array<int, 10> requestedProjects;

  public:
    Student();
    ~Student();

    Student(string id, float mark, array<int, 10> projects);

    string getId();
    float getMark();
    array<int, 10> getProjects();

    void setId(string id);
    void setMark(float mark);
    void setProjects(array<int, 10> projects);
};

#endif // STUDENT_H
