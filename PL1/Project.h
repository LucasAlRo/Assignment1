#ifndef PROJECT_H
#define PROJECT_H
#include <string>

using namespace std;
class Project
{
  private:
    int number;
    string name;
    string degree;
    string description;

  public:
    Project();
    ~Project();

    Project(int number, string name, string degree, string description);

    int getNumber();
    string getName();
    string getDegree();
    string getDescription();

    void setNumber(int number);
    void setName(string name);
    void setDegree(string degree);
    void setDescription(string description);
};

#endif // PROJECT_H
