#include "Grade.h"

Grade::Grade() {
	this->percentage = -1;
	this->letterGrade = "N";
	this->gradePoint = -1;
}

Grade::Grade(float p) {
	this->percentage = p;
	this->letterGrade = convertToPercentage();
	this->gradePoint = convertToNum();
}
Grade::Grade(float lg){
	this->letterGrade = lg;
	this->percentage = convertToPercentage();
	this->gradePoint = convertToNum();
}


float Grade::getPercentage() { return this->percentage; }
float Grade::getGradePoint() { return this->gradePoint; }
string Grade::getLetterGrade() { return this->letterGrade; }


float Grade::convertToPercentage(){
	if (this->letterGrade == "A+") {
		this->percentage = .9;
	}
	else if (this->letterGrade == "A") {
		this->percentage = .8;
	}
	else if (this->letterGrade == "B+") {
		this->percentage = .75;
	}
	else if (this->letterGrade == "B") {
		this->percentage = .7;
	}
	else if (this->letterGrade == "C+") {
		this->percentage = .65;
	}
	else if (this->letterGrade == "C") {
		this->percentage = .6;
	}
	else if (this->letterGrade == "D") {
		this->percentage = .51;
	}
	else {
		this->percentage = 0;
	}
}
string Grade::convertToLetter(){
	if (this->percentage >= .9) {
		this->letterGrade = "A+";
	}
	else if (this->percentage >= .8) {
		this->letterGrade = "A";
	}
	else if (this->percentage >= .75) {
		this->letterGrade = "B+";
	}
	else if (this->percentage >= .7) {
		this->letterGrade = "B";
	}
	else if (this->percentage >= .65) {
		this->letterGrade = "C+";
	}
	else if (this->percentage >= .6) {
		this->letterGrade = "C";
	}
	else if (this->percentage > .5) {
		this->letterGrade = "D";
	}
	else {
		this->letterGrade = "F";
	}
}
float Grade::convertToNum() {
	if (this->letterGrade == "A+") {
		this->gradePoint = 4.5;
	}
	else if (this->letterGrade == "A") {
		this->gradePoint = 4;
	}
	else if (this->letterGrade == "B+") {
		this->gradePoint = 3.5;
	}
	else if (this->letterGrade == "C+") {
		this->gradePoint = 3;
	}
	else if (this->letterGrade == "C") {
		this->gradePoint = 2;
	}
	else if (this->letterGrade == "D") {
		this->gradePoint = 1;
	}
	else {
		this->gradePoint = 0;
	}
}

void  Grade::setPercentage(float p) {
	
	if (p > 1)
	{
		p = p / 100;
	}
	this->percentage = p;
	this->letterGrade = convertToLetter();
	this->gradePoint = convertToNum();

	}
void Grade::setLetterGrade(string l){
	this->letterGrade = l;
	this->percentage = convertToPercentage();
	this->gradePoint = convertToNum();
}

Grade::~Grade() {}