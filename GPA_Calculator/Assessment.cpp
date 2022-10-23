#include "Assessment.h"

// Constructors
Assessment::Assessment() {
	this->name = "";
	this->weight = 0;
	this->grade = new Grade(0);
}
Assessment::Assessment(string n, float w):EvaluationDivision(n){
	this->weight = w;
}

// Access methods
// Setter
void Assessment::setWeight(float w) { this->weight = w; }
void Assessment::setDone(bool d) { this->done = d; }
void Assessment::toggleDone() { this->done = !this->done; }

void Assessment::setGrade(float g) {
	this->grade->setPercentage(g);
	if (this->grade->getLetterGrade() != "N")
		this->setDone(true);
	else
		this->setDone(false);
}
void Assessment::setGrade(string g) {
	this->grade->setLetterGrade(g);
	if (this->grade->getLetterGrade() !="N")
		this->setDone(true);
	else
		this->setDone(false);
}
void Assessment::setGrade(Grade* g) {
	this->grade = g;
	if (this->grade->getLetterGrade() !="N")
		this->setDone(true);
	else
		this->setDone(false);
}

// Getters
float Assessment::getWeight() { return this->weight; }
bool Assessment::isDone() { return this->done; }

// Destructor
Assessment::~Assessment(){}