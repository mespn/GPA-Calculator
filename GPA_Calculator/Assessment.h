/**
* AUTHOR:       Manuel Alejandro Espinoza Narro
* DATE CREATED: December 10th, 2021
* 
* This is a header file for the Assessment class.
* Further description is given in the Assessment.cpp file.
* 
*/


#pragma once
#include "EvaluationDivision.h"
#include "Dependencies.h"

class Assessment :
    public EvaluationDivision
{
protected:
    float weight;
    bool done;

public:
    // Constructors
    Assessment();
    Assessment(string n, float w);

    // Access methods
    // Setter
    void setWeight(float w);
    void setDone(bool d);
    void toggleDone();

    virtual void setGrade(float g);
    virtual void setGrade(string g);
    virtual void setGrade(Grade* g);

    // Getters
    float getWeight();
    bool isDone();

    // Destructor
    ~Assessment();
};

