#include "Course.h"

// Constructors
Course::Course():EvaluationDivision() {
    this->credits = 3;
}
Course::Course(string n):EvaluationDivision(n){
    this->credits = 3;
}
Course::Course(string n, int c):EvaluationDivision(n){
    this->credits = c;
}

// Access Methods
    // Getters
int Course::getCredits() {
    return this->credits; 
}

float Course::getAssessmentPercentage(string n){
    for each (Assessment* task in assessmentList) {
        if (task->getName() == n)
            return task->getGrade()->getPercentage();
    }
}

Grade* Course::getAssessmentGrade(string n){
    for each (Assessment * task in assessmentList) {
        if (task->getName() == n)
            return task->getGrade();
    }
}

Assessment* Course::getAssessment(string n){
    for each (Assessment * task in assessmentList) {
        if (task->getName() == n)
            return task;
    }
}

float Course::getAssessmentPercentage(int index){
    return this->assessmentList[index]->getGrade()->getPercentage();
}

Grade* Course::getAssessmentGrade(int index){
    return this->assessmentList[index]->getGrade();
}

Assessment* Course::getAssessment(int index){
    return this->assessmentList[index];
}

vector<Assessment*> Course::getAssessments(){
    return assessmentList;
}

// Adder
void Course::addAssessment(string n, float w){
    this->assessmentList.push_back(new Assessment(n, w));
}

// Setters
void Course::setGrade(int index, float p){
    this->assessmentList[index]->setGrade(p);
}
void Course::setGrade(string n, float p){
    for each (Assessment * task in this->assessmentList) {
        if (task->getName() == n) {
            task->setGrade(p);
        }
    }
}
void Course::setAssessmentName(string former, string newName){
    for each (Assessment * task in this->assessmentList) {
        if (task->getName() == former) {
            task->setName(newName);
        }
    }
}

// Calculator
Grade* Course::computeGrade(){
    float completed = 0; // Sum of the completed weights
    float sum = 0; // 
    for each (Assessment * task in this->assessmentList) {
        if (task->isDone()) {
            completed += task->getWeight();
        }
    }

    for each(Assessment * task in this->assessmentList) {
        if (task->isDone()) {
            sum += task->getPercentage() * task->getWeight() * 100/completed;
        }
    }
    return new Grade(sum);
}

// Destructor
Course::~Course(){}