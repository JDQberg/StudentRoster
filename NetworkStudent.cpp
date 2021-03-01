#include <iostream>
#include "NetworkStudent.h"
using std::cout;



NetworkStudent::NetworkStudent() : Student()
{
	program = NETWORK;
}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int numDays[], DegreeProgram program)
	:Student(studentID, firstName, lastName, emailAddress, age, numDays)
{
	program = NETWORK;
}


DegreeProgram NetworkStudent::getDegreeProgram()
{
	return NETWORK;
}

void NetworkStudent::print()
{
	this->Student::print();
	cout << "NETWORK" << "\n";
} 

NetworkStudent::~NetworkStudent()
{
}
