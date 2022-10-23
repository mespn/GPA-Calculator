/**
* AUTHOR:       Manuel Alejandro Espinoza Narro
* DATE CREATED: December 10th, 2021
*
* This is a header file for the MultiAssessment class.
* Further description is given in the MultiAssessment.cpp file.
*
*/

#pragma once
#include "Dependencies.h"
#include "Assessment.h"
#include "Grade.h"

class MultiAssessment :
    public Assessment
{
private:
    vector<Assessment*> list;

public:
    MultiAssessment();
    MultiAssessment(string n, float w);

    // Access
    // Adder
    void addAssessment(string n, float w);
    // Setters
    void editGrade(int index, float g);

    // Getter
    Assessment* getAssessment(int index);
    Grade* getGrade(int index);
};

