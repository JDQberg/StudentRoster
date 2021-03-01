#include <iostream>
#include "SoftwareStudent.h"
using std::cout;



SoftwareStudent::SoftwareStudent() : Student()
{
	program = SOFTWARE;
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int numDays[], DegreeProgram program)
	: Student(studentID, firstName, lastName, emailAddress, age, numDays)
{
	program = SOFTWARE;
}


DegreeProgram SoftwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

void SoftwareStudent::print()
{
	this->Student::print();
	cout << "SOFTWARE" << "\n";
}

SoftwareStudent::~SoftwareStudent()
{
}
