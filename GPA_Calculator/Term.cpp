#include "Term.h"

// Constructor
Term::Term() {
	
}
Term::Term(string n):EvaluationDivision(n){
	this->totalCredits = 0;
}

// Adder & Remover
void Term::addCourse(string n, int creds){
	this->courseList.push_back(new Course(n, creds));
	this->totalCredits += creds;
}
void Term::removeCourse(string n){
	int counter = 0;
	for each (Course * course in this->courseList) {
		if (course->getName() == n) {
			this->totalCredits -= course->getCredits();
			this->courseList.erase(this->courseList.begin() + counter);
		}
		++counter;
	}
}

// Getters
int Term::getCredits() { return this->totalCredits; }
Course* Term::getCourse(string courseName){
	for each (Course * course in courseList) {
		if (course->getName() == courseName) {
			return course;
		}
	}
	throw out_of_range("Course not found");
}
Course* Term::getCourse(int index){
	return this->courseList[index];
}

Grade* Term::getCourseGrade(string courseName){
	try {
		return this->getCourse(courseName)->getGrade();
	}
	catch(const out_of_range){
		throw;
	}
}
Grade* Term::getCourseGrade(int index){
	return this->getCourse(index)->getGrade();
}

// Calculator Method
Grade* Term::computeGPA(){
	float gpa = 0;
	for each (Course * course in courseList) {
		gpa += course->getPercentage() * course->getCredits() / this->totalCredits;
	}
	return new Grade(gpa);
}

// Destructor
Term::~Term(){}