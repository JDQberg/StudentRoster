#include <iostream>
#include "SecurityStudent.h"
using std::cout;



SecurityStudent::SecurityStudent() : Student()
{
	program = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int numDays[], DegreeProgram program)
	: Student(studentID, firstName, lastName, emailAddress, age, numDays)
{
	program = SECURITY;
}


DegreeProgram SecurityStudent::getDegreeProgram()
{
	return SECURITY;
}

void SecurityStudent::print()
{
	this->Student::print();
	cout << "SECURITY" << "\n";
}


SecurityStudent::~SecurityStudent()
{
}
