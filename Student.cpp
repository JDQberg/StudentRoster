#include "Student.h"
#include"Roster.h"
#include <iostream>
#include <iomanip>
using namespace std;

Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < daysInCourse; i++) this->numDays[i] = 0;
}


Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[])
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->numDays = new int[daysInCourse];
	for (int i = 0; i < 3; i++) this->numDays[i] = numDays[i];
}

void Student::print()
{
	cout << left << setw(5) << studentID;
	cout << left << setw(20) << firstName;
	cout << left << setw(20) << lastName;
	cout << left << setw(30) << emailAddress;
	cout << left << setw(5) << numDays[0];
	cout << left << setw(5) << numDays[1];
	cout << left << setw(5) << numDays[2];
}

Student::~Student()
{
}

DegreeProgram Student::getDegreeProgram()
{
	return NETWORK; //Fixme
}





string Student::GetStudentID()
{
	return studentID;
}

string Student::GetFirstName()
{
	return firstName;
}

string Student::GetLastName()
{
	return lastName;
}

string Student::GetEmailAddress()
{
	return emailAddress;
}

int Student::GetAge()
{
	return age;
}

int * Student::GetNumDays()
{
	return numDays;
}

	//Setters

void Student::SetStudentID(string studentID)
{
	this->studentID = studentID;
}

void Student::SetFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::SetLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::SetEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Student::SetAge(int age)
{
	this->age = age;
}

void Student::SetNumDays(int numDays[])
{
	for (int i = 0; i < daysInCourse; i++)
		this->numDays[i] = numDays[i];
}


