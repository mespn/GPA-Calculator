#include "MultiAssessment.h"

MultiAssessment::MultiAssessment():Assessment() {
}

MultiAssessment::MultiAssessment(string n, float w) : Assessment(n, w) {}

// Access
// Adder
void MultiAssessment::addAssessment(string n, float w){
	this->list.push_back(new Assessment(n, w));
}
// Setters
void MultiAssessment::editGrade(int index, float g) {
	this->list[index]->setGrade(g);
}

// Getter
Assessment* MultiAssessment::getAssessment(int index) { return list[index]; }
Grade* MultiAssessment::getGrade(int index) { return list[index]->getGrade(); }

MultiAssessment::~MultiAssessment(){}