/**
* AUTHOR:       Manuel Alejandro Espinoza Narro
* DATE CREATED: December 10th, 2021
*
* This is a header file for the Course class.
* Further description is given in the Course.cpp file.
*
*/

#pragma once
#include "EvaluationDivision.h"
#include "Dependencies.h"
#include "Assessment.h"
#include "Term.h"
#include "Year.h"

class Course :
    public EvaluationDivision
{
private:
    vector<Assessment*> assessmentList;
    int credits;
public:
// Constructors
    Course();
    Course(string n);
    Course(string n, int c);

// Access Methods
    // Getters
    int getCredits();
    float getAssessmentPercentage(string n);
    Grade* getAssessmentGrade(string n);
    Assessment* getAssessment(string n);
    float getAssessmentPercentage(int index);
    Grade* getAssessmentGrade(int index);
    Assessment* getAssessment(int index);
    vector<Assessment*> getAssessments();

    // Adder
    void addAssessment(string n, float w);
    void addAssessment(string year, string term, string n, float w);
    void addAssessment(Year* year, Term* term, string n, float w);

    // Setters
    void setGrade(int index, float p);
    void setGrade(string n, float p);
    void setAssessmentName(string former, string newName);

    // Calculator
    Grade* computeGrade();

    // Destructor
    ~Course();
};

