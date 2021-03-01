#pragma once
#include <string>
#include "Student.h"

class NetworkStudent : public Student
{
public:
	NetworkStudent();
	NetworkStudent(
		string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int numDays[],
		DegreeProgram program
	);

	DegreeProgram getDegreeProgram();
	void print();

	~NetworkStudent();
};

