#include "EvaluationDivision.h"

// Constructors

EvaluationDivision::EvaluationDivision() {
	// Empty constructor
	this->name = "";
	this->grade = new Grade();
}
EvaluationDivision::EvaluationDivision(string n){
	// Constructor with name and empty grade
	this->name = n;
	this->grade = new Grade();
}


// Access methods
// Setters
void EvaluationDivision::setName(string n){
	name = n;
}
void EvaluationDivision::setGrade(float g){
	grade->setPercentage(g);
}
void EvaluationDivision::setGrade(string g){
	grade->setLetterGrade(g);
}
void EvaluationDivision::setGrade(Grade* g){
	grade = g;
}

// Getters
string EvaluationDivision::getName() { return name; }
string EvaluationDivision::getLetterGrade() { return this->grade->getLetterGrade(); }
float EvaluationDivision::getPercentage(){return this->grade->getPercentage();}
float EvaluationDivision::getGradePoint(){return this->grade->getGradePoint();}
Grade* EvaluationDivision::getGrade() { return this->grade; }

