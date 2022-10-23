#include "GradeConvertor.h"

vector<string> split(string source, char separator){
	string item = "";
	vector<string> separated;
	for each (char letter in source) {
		if (letter == separator || letter == '\n')
		{
			separated.push_back(item);
			item = "";
		}
		item += letter;
	}
	return separated;
}

GradeConvertor::GradeConvertor(){
	this->usesLetters = false;
	this->usesGradePoints = false;

	this->MAX_GRADE = 100;
	for (int i = 0; i <= this->MAX_GRADE; i++) {
		this->absolutes.push_back(i);
		this->percentages.push_back(i / 100);
	}
}
GradeConvertor::GradeConvertor(string fileName){
	ifstream gradeTemplate;
	int lineCounter = 0, index;
	string line;
	
	gradeTemplate.open(fileName);
	try {
		while (getline(gradeTemplate, line)) {
			switch (lineCounter) {
			case 0:
				this->MAX_GRADE = stof(line);
				break;
			case 1:
				this->usesLetters = stoi(line) == 1;
				break;
			case 2:
				this->usesGradePoints = stoi(line) == 1;
				break;
			default:
				index = lineCounter - 3;
				vector<string> splitLine = split(line, '\t');
				this->letterGrades.push_back(splitLine[0]);
				this->absolutes.push_back(stof(splitLine[1]));
				this->percentages.push_back(stof(splitLine[1]) / this->MAX_GRADE);
				if (this->usesGradePoints)
					this->gradePoints.push_back(stof(splitLine[2]));
				break;
			}// Switch

			lineCounter++;

		} // while getLine
	}// Try block
	catch(ifstream::failure e){
		cout << "The file failed to open! :(";
	}
}

string GradeConvertor::absoluteToLetter(float abs){}
string GradeConvertor::percentageToLetter(float percent){}
string GradeConvertor::gradePointToLetter(float gp){}

float GradeConvertor::letterToAbsolute(string letter){}
float GradeConvertor::percentageToAbsolute(float percent){}
float GradeConvertor::gradePointToAbsolute(float gp){}

float GradeConvertor::letterToPercentage(string letter){}
float GradeConvertor::absoluteToPercentage(float abs){}
float GradeConvertor::gradePointToPercentage(float gp){}

float GradeConvertor::letterToGradePoint(string letter){}
float GradeConvertor::absoluteToGradePoint(float abs){}
float GradeConvertor::percentageToGradePoint(float percent){}

void GradeConvertor::showValues()
{
	cout << "The max grade is: " << this->MAX_GRADE << endl;
	if (this->usesGradePoints)
		cout << "It uses grade points."<< endl;
	if (this->usesLetters)
		cout << "It uses letters." << endl;

	cout << "Grade equivalence:\n";
	for (int i = 0; i < this->letterGrades.size(); i++)
	{
		if (this->usesLetters)
			cout << this->letterGrades[i] << "\t";
		cout << this->absolutes[i] << "\t";
		cout << this->percentages[i] << "\t";
		if (this->usesGradePoints)
			cout << this->gradePoints[i] << "\n";
		else
			cout << endl;
	}
}

GradeConvertor::~GradeConvertor(){}
