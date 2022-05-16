#include "Student.h"

Student::Student(std::string stuName, int stuAverage)
{
	setName(stuName);
	setAverage(stuAverage);
}

// Regular Function
std::string Student::getLetterGrade()
{
	std::string letterGrade;

	if (average >= 90)
	{
		letterGrade = "A+";
	}
	else if (average >= 80)
	{
		letterGrade = "A";
	}
	else if (average >= 70)
	{
		letterGrade = "B";
	}
	else if (average >= 60)
	{
		letterGrade = "C";
	}
	else if (average >= 50)
	{
		letterGrade = "D";
	}
	else
	{
		letterGrade = "F";
	}

	return letterGrade;
}