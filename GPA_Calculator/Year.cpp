#include "Year.h"

Year::Year(): EvaluationDivision() {

}
Year::Year(string n){
	this->totalCredits = 0;
}

// Adder & Remover
void Year::addTerm(string n){
	this->termList.push_back(new Term(n));
}
void Year::addTerm(Term* t) {
	this->termList.push_back(t);
	this->totalCredits += t->getCredits();
}
void Year::removeTerm(string n){
	int counter = 0;
	for each (Term * term in this->termList) {
		if (term->getName() == n)
		{
			this->totalCredits -= term->getCredits();
			this->termList.erase(this->termList.begin() + counter);
		}
		counter++;
	}
}

void Year::removeTerm(Term* n) {
	int counter = 0;
	for each (Term * term in this->termList) {
		if (term == n)
		{
			this->totalCredits -= term->getCredits();
			this->termList.erase(this->termList.begin() + counter);
		}
		counter++;
	}
}

// Getters
int Year::getCredits() { return this->totalCredits; }
Term* Year::getTerm(string n){
	for each (Term * term in this->termList)
	{
		if (term->getName() == n)
			return term;
	}
}
Term* Year::getTerm(int index){
	return this->termList.at(index);
}
vector<Term*> Year::getTermList(){
	return this->termList;
}

// Calculator Methods
Grade* Year::computeGPA(){
	float gpa = 0;
	for each (Term * term in this->termList)
	{
		gpa += term->getPercentage() * term->getCredits() / this->totalCredits;
	}
	return new Grade(gpa);
}

// Destructor
Year::~Year(){}