#pragma once
#include<string>
#include"Degree.h"
using std::string;


class Student
{
public:
	
	Student();
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int numDays[]);
	~Student();

	const static int daysInCourse = 3;

	//an accessor(i.e., getter) for each  instance variable from part D1
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetAge();
	int *GetNumDays();
	virtual DegreeProgram getDegreeProgram() = 0;

	//a mutator(i.e., setter) for each  instance variable from part D1
	//Note : All access and changes to the instance variables of the Student class should be done through the accessor and mutator functions.
	void SetStudentID(string studentID);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetAge(int age);
	void SetNumDays(int numDays[]);


			//virtual print() to print specific student data
	virtual void print() = 0;

protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int* numDays;
	DegreeProgram program;
};

