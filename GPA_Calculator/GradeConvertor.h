#pragma once
#include "Dependencies.h"

class GradeConvertor
{
private:
	float MAX_GRADE;

	vector<string> letterGrades;
	vector<float> absolutes;
	vector<float> gradePoints;
	vector<float> percentages;

	bool usesLetters;
	bool usesGradePoints;

public:
	GradeConvertor();
	GradeConvertor(string fileName);

	string absoluteToLetter(float abs);
	string percentageToLetter(float percent);
	string gradePointToLetter(float gp);

	float letterToAbsolute(string letter);
	float percentageToAbsolute(float percent);
	float gradePointToAbsolute(float gp);

	float letterToPercentage(string letter);
	float absoluteToPercentage(float abs);
	float gradePointToPercentage(float gp);

	float letterToGradePoint(string letter);
	float absoluteToGradePoint(float abs);
	float percentageToGradePoint(float percent);

	void showValues();


	~GradeConvertor();
};

