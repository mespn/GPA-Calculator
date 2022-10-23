/**
* AUTHOR:       Manuel Alejandro Espinoza Narro
* DATE CREATED: December 10th, 2021
*
* This is a header file for the Year class.
* Further description is given in the Year.cpp file.
*
*/

#pragma once
#include "EvaluationDivision.h"
#include "Term.h"
#include "Dependencies.h"

class Year :
    public EvaluationDivision
{
private:
    int totalCredits;
    vector<Term*> termList;

public:
    // Constructors
    Year();
    Year(string n);

    // Adder & Remover
    void addTerm(string n);
    void addTerm(Term* t);
    void removeTerm(string n);
    void removeTerm(Term* n);

    // Getters
    int getCredits();
    Term* getTerm(string n);
    Term* getTerm(int index);
    vector<Term*> getTermList();

    // Calculator Methods
    Grade* computeGPA();

    // Destructor
    ~Year();
};

