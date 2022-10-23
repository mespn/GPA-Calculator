/**
* AUTHOR:       Manuel Alejandro Espinoza Narro
* DATE CREATED: December 10th, 2021
*
* This is a header file for the Evaluation class.
* Further description is given in the Evaluation.cpp file.
*
*/

#pragma once
#include <iostream>
#include "Grade.h"

using namespace std;

class EvaluationDivision
{
protected:
	string name;
	Grade* grade;

public:
	EvaluationDivision();
	EvaluationDivision(string n);
	void setName(string n);
	string getName();
	virtual void setGrade(float g);
	virtual void setGrade(string g);
	virtual void setGrade(Grade* g);
	string getLetterGrade();
	float getPercentage();
	float getGradePoint();
	Grade* getGrade();
};

