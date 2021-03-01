#pragma once
#include <iostream>
#include <string>
#include "Student.h"
#include "NetworkStudent.h"
#include "SecurityStudent.h"
#include "SoftwareStudent.h"

class Roster
{
private:
	
	int lastIndex;
	int capacity;
	Student** classRosterArray;

public:
	Roster();
	Roster(int capacity);

	void parseThenAdd(string row);
	void add(string sID, string sfirstName, string slastName, string semailAddress, int sage, int sdaysInCourse1, int sdaysInCourse2, int sdaysInCourse3, DegreeProgram d);
	void printAll();

	~Roster();
};

