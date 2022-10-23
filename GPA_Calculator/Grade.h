/**
* AUTHOR:       Manuel Alejandro Espinoza Narro
* DATE CREATED: December 10th, 2021
*
* This is a header file for the Grade class.
* Further description is given in the Grade.cpp file.
*
*/

#pragma once
#include "Dependencies.h"

using namespace std;

class Grade
{
private:
	const float MAX_GRADE;
	float absolute;
	float percentage;
	float gradePoint;
	string letterGrade;

public:

	Grade();
	Grade(float p);
	Grade(float lg);

	float getPercentage();
	float getGradePoint();
	string getLetterGrade();

	float convertToPercentage();
	string convertToLetter();
	float convertToNum();

	void  setPercentage(float p);
	void setLetterGrade(string l);
	void setgradePoint(float num);

	~Grade();
};

