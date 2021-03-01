#pragma once
#include <string>
#include "Student.h"

class SoftwareStudent : public Student
{
public:
	SoftwareStudent();
	SoftwareStudent(
		string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int numDays[],
		DegreeProgram program
	);

	DegreeProgram getDegreeProgram();
	void print();

	~SoftwareStudent();
};
