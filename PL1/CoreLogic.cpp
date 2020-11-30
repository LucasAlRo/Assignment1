#include <array>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

#include "CoreLogic.h"
#include "DListP.h"
#include "DListS.h"
#include "Project.h"
#include "Queue.h"
#include "Stack.h"
#include "Student.h"

using namespace std;

CoreLogic::CoreLogic()
{
}

CoreLogic::~CoreLogic()
{
}

// Reads the contents of the "students.csv" file and stores them in a list
void CoreLogic::readSFile()
{
    ifstream studentFile;
    studentFile.open("students.csv");
    Student student;
    int line = 0;

    while(studentFile.good())
        {
            string element;
            getline(studentFile, element, '\n');

            int column, y = 0;
            string word = "";
            string number = "";
            array<int, 10> numberarray;
            for(auto x : element)
                {

                    if(x == ';')
                        {
                            cout << word << endl;

                            switch(column)
                                {
                                case 0:
                                    try
                                        {
                                            student.setId(word);
                                        }
                                    catch(exception e)
                                        {
                                            cout << "There's been an error in line: " << line << " column: " << column
                                                 << " while reading students";
                                        }
                                    break;

                                case 1:
                                    try
                                        {
                                            student.setMark(stof(word));
                                        }
                                    catch(exception e)
                                        {
                                            cout << "There's been an error in line: " << line << " column: " << column
                                                 << " while reading students";
                                        }
                                    break;

                                default:
                                    try
                                        {
                                            if(x == ',')
                                                {
                                                    numberarray[y] = stoi(number);
                                                    y = y + 1;
                                                    student.setProjects(numberarray);
                                                }
                                            else
                                                {
                                                    number = number + x;
                                                }
                                        }
                                    catch(exception e)
                                        {
                                            cout << "There's been an error in line: " << line << " column: " << column
                                                 << " while reading students";
                                        }
                                }
                            column = column + 1;
                            word = "";
                        }

                    else
                        {
                            word = word + x;
                        }
                }
            cout << word << endl;
            line = line + 1;
            if(this->dlists.isEmpty())
                {
                    this->dlists.Insert(student, 0);
                }
            else
                {
                    this->dlists.Append(student);
                }
        }
}

// Reads the contents of the "projects.csv" file and stores them in a list
void CoreLogic::readPFile()
{
    ifstream projectFile;
    projectFile.open("projects.csv");
    Project project;
    int line = 0;

    while(projectFile.good())
        {
            string element;
            getline(projectFile, element, '\n');

            int column, y = 0;
            string word = "";
            string number = "";
            array<int, 10> numberarray;
            for(auto x : element)
                {

                    if(x == ';')
                        {
                            cout << word << endl;

                            switch(column)
                                {
                                case 0:
                                    try
                                        {
                                            project.setNumber(stoi(word));
                                        }
                                    catch(exception e)
                                        {
                                            cout << "There's been an error in line: " << line << " column: " << column
                                                 << " while reading projects";
                                        }
                                    break;

                                case 1:
                                    try
                                        {
                                            project.setName(word);
                                        }
                                    catch(exception e)
                                        {
                                            cout << "There's been an error in line: " << line << " column: " << column
                                                 << " while reading projects";
                                        }
                                    break;
                                case 2:
                                    try
                                        {
                                            project.setDegree(word);
                                        }
                                    catch(exception e)
                                        {
                                            cout << "There's been an error in line: " << line << " column: " << column
                                                 << " while reading projects";
                                        }
                                    break;
                                default:
                                    try
                                        {
                                            project.setDescription(word);
                                        }
                                    catch(exception e)
                                        {
                                            cout << "There's been an error in line: " << line << " column: " << column
                                                 << " while reading projects";
                                        }
                                }
                            column = column + 1;
                            word = "";
                        }

                    else
                        {
                            word = word + x;
                        }
                }
            cout << word << endl;
            line = line + 1;
            if(this->dlistp.isEmpty())
                {
                    this->dlistp.Insert(project, 0);
                }
            else
                {
                    this->dlistp.Append(project);
                }
        }
}

void CoreLogic::projectAssignment()
{
    Project auxcell;

    int gii = 0;
    int gisi = 0;

    readPFile();
    readSFile();
    orderStudents();
    orderProjectsDegree();
    orderProjectsNumber();
    stackProjects();

    while(!stackPr.isEmpty() && !this->dlists.isEmpty())
        {
            DListNodeS* auxnode = this->dlists.getHead();
            auxcell = stackPr.Pop();
            if(searchElement(auxnode->getElement().getProjects(), auxcell.getNumber()))
                {
                    this->queue.Enqueue(auxnode->getElement(), auxcell);
                    cout << "New pair: Project code: " << auxcell.getNumber()
                         << " Student name: " << auxnode->getElement().getId() << endl;

                    if(auxcell.getDegree() == "GII")
                        {
                            gii++;
                        }
                    else if(auxcell.getDegree() == "GISI")
                        {
                            gisi++;
                        }
                }
            auxnode = auxnode->getNext();
        }
    cout << "Number of projects assigned in GII: " << gii << endl;
    cout << "Number of projects assigned in GISI: " << gisi << endl;
}

//________________AUXILIAR FUNCTIONS TO SIMPLIFY THE ONE ABOVE________________

void CoreLogic::orderStudents()
{
    DListS auxlist;
    while(!this->dlists.isEmpty())
        {
            DListNodeS* auxnode = this->dlists.getHead();
            int max = 0;
            int mark = 0;
            int position = 0;
            int counter = 0;

            while(auxnode->getNext() != nullptr)
                {
                    mark = auxnode->getElement().getMark();
                    if(max <= mark)
                        {
                            max = mark;
                            position = counter++;
                        }

                    auxnode = auxnode->getNext();
                }

            auxlist.Insert(this->dlists.checkInPosList(position), 0);
            this->dlists.Remove(position);
        }
    this->dlists = auxlist;
}

void CoreLogic::orderProjectsNumber()
{
    DListP auxlist;
    DListP auxlist2 = this->dlistp;
    while(!auxlist2.isEmpty())
        {
            DListNodeP* auxnode = auxlist2.getHead();
            int min = 0;
            int number = 0;
            int counter = 0;
            int position = 0;

            while(auxnode->getNext() != nullptr)
                {
                    number = auxnode->getElement().getNumber();
                    if(min >= number)
                        {
                            min = number;
                            position = counter;
                        }

                    auxnode = auxnode->getNext();
                }

            auxlist.Insert(auxlist2.checkInPosList(position), 0);
            auxlist2.Remove(position);
        }
    this->reverselistp = auxlist;
}

void CoreLogic::orderProjectsDegree()
{
    DListP auxlist;
    while(!this->dlistp.isEmpty())
        {
            DListNodeP* auxnode = this->dlistp.getHead();
            int number, counter, position = 0;
            string degree, min = "";

            while(auxnode->getNext() != nullptr)
                {
                    degree = auxnode->getElement().getDegree();
                    if(min.compare(degree) < 0)
                        {
                            min = degree;
                            position = counter;
                        }
                    else if(min.compare(degree) == 0)
                        {
                            if(number < auxnode->getElement().getNumber())
                                {
                                    min = degree;
                                    position = counter;
                                }
                        }

                    auxnode = auxnode->getNext();
                }

            auxlist.Insert(this->dlistp.checkInPosList(position), 0);
            this->dlistp.Remove(position);
        }
    this->dlistp = auxlist;
}

void CoreLogic::stackProjects()
{
    DListNodeP* auxnode = this->dlistp.getHead();
    Stack stack;
    while(auxnode->getNext() != nullptr)
        {
            stack.Push(auxnode->getElement());
            this->dlistp.Remove(0);

            auxnode = auxnode->getNext();
        }
    this->stackPr = stack;
}

bool CoreLogic::searchElement(array<int, 10> list, int elementsearched)
{
    bool presence = false;
    for(int i = 0; i < sizeof(list); i++)
        {
            int element = list[i];
            if(element == elementsearched)
                {
                    presence = true;
                }
        }
    return presence;
}