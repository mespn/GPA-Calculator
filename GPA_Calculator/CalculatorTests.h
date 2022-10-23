#pragma once
#include "Dependencies.h"
#include "Assessment.h"
#include "Course.h"
#include "EvaluationDivision.h"
#include "Grade.h"
#include "MultiAssessment.h"
#include "Term.h"
#include "Year.h"
#include "GradeConvertor.h"

static class CalculatorTests
{
public:

	static void AssessmentTest()
	{
		// Creating the Assessment objects
		Assessment* finalExam = new Assessment("Final Exam", .35);
		Assessment* groupProject = new Assessment("Essay #1", .5);

		// Testing access methods

			// getGrade() without any real grade
		
			// setGrade()
			finalExam->setGrade(60);
			groupProject->setGrade(85);

			// getGrade
		 
			// getName()
			cout << "Should print 'Final Exam'";
			cout << finalExam->getName();
			cout << "Should print 'Essay #1'";
			cout << groupProject->getName();

			// 

	}

	static void GradeConvertorTest()
	{
		GradeConvertor* convertor = new GradeConvertor("gradeExample.txt");
		convertor->showValues();
		system("pause");
	}

};

