#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student stu1("Wallace Balaniuc", 98);
	Student stu2("Jane Doe", 65);
	Student stu3;

	stu3.setAverage(80);

	cout << stu1.getName() << " letter grade quivalent is: " << stu1.getLetterGrade() << endl;
	cout << stu2.getName() << " letter grade quivalent is: " << stu2.getLetterGrade() << endl;
	cout << stu3.getName() << " letter grade quivalent is: " << stu3.getLetterGrade() << endl;

	return 0;
}