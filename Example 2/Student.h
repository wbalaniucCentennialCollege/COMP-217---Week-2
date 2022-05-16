#pragma once
#include <string>

// Functions implemented inside the class -- inline (1 - 3 lines of code)
// Functions implemented outside the class -- regular functions (3+)

class Student
{
public:
	// Constructor
	// Default -- No parameters
	Student() : name("DEFAULT"), average(0)	{ }

	Student(std::string stuName, int stuAverage);

	void setName(std::string stuName)
	{
		name = stuName;
	}

	std::string getName() const
	{
		return name;
	}

	void setAverage(int stuAverage)
	{
		if (stuAverage > 0)
		{
			if (stuAverage <= 150)
			{
				// Assign the value to the variable
				average = stuAverage;
			}
		}
	}

	int getAverage() const
	{
		return average;
	}

	std::string getLetterGrade(); // Function prototype

private:
	std::string name;
	int average;
};
