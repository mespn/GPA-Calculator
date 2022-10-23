/**
* AUTHOR:       Manuel Alejandro Espinoza Narro
* DATE CREATED: December 10th, 2021
*
* This is a header file for the Term class.
* Further description is given in the Term.cpp file.
*
*/

#pragma once
#include "EvaluationDivision.h"
#include "Course.h"
#include "Dependencies.h"

class Term :
    public EvaluationDivision
{
private:
    int totalCredits;
    vector<Course*> courseList;

public:
    // Constructor
    Term();
    Term(string n);

    // Adder & Remover
    void addCourse(string n, int creds);
    void removeCourse(string n);

    // Getters
    int getCredits();
    Course* getCourse(string courseName);
    Course* getCourse(int index);

    Grade* getCourseGrade(string courseName);
    Grade* getCourseGrade(int index);
    
    // Calculator Method
    Grade* computeGPA();

    // Destructor
    ~Term();

};

