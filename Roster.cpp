#include "Roster.h"
#include "Student.h"
#include<string>
#include<iostream>
using namespace std;


Roster::Roster()
{
	this->capacity = 0;
	this->lastIndex = -1;
	this->classRosterArray = nullptr;
}

Roster::Roster(int capacity)
{
	this->capacity = capacity;
	this->lastIndex = -1;
	this->classRosterArray = new Student*[capacity];
}


Roster::~Roster()
{
}


void Roster::parseThenAdd(string row)
{

		lastIndex++;
		DegreeProgram deg;
		if (row.at(row.length() - 1) == 'K')
		{
			deg = NETWORK;
		}
		else if (row.at(row.length() - 1) == 'Y')
		{
			deg = SECURITY;
		}
		else if (row.at(row.length() - 1) == 'E')
		{
			deg = SOFTWARE;
		}

		int rhs = row.find(",");
		string sID = row.substr(0, rhs);

		int lhs = rhs + 1;
		rhs = row.find(",", lhs);
		string sfirstName = row.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = row.find(",", lhs);
		string slastName = row.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = row.find(",", lhs);
		string semailAddress = row.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = row.find(",", lhs);
		int sage = stoi(row.substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = row.find(",", lhs);
		int sdaysInCourse1 = stoi(row.substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = row.find(",", lhs);
		int sdaysInCourse2 = stoi(row.substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = row.find(",", lhs);
		int sdaysInCourse3 = stoi(row.substr(lhs, rhs - lhs));


		add(sID, sfirstName, slastName, semailAddress, sage, sdaysInCourse1, sdaysInCourse2, sdaysInCourse3, deg);

}

void Roster::add(string sID, string sfirstName, string slastName, string semailAddress, int sage, int sdaysInCourse1, int sdaysInCourse2, int sdaysInCourse3, DegreeProgram program)
{
	int days[3];
	days[0] = sdaysInCourse1;
	days[1] = sdaysInCourse2;
	days[2] = sdaysInCourse3;
	if (program == NETWORK) classRosterArray[lastIndex] = new NetworkStudent(sID, sfirstName, slastName, semailAddress, days, NETWORK);
	else if (program == SOFTWARE) classRosterArray[lastIndex] = new SoftwareStudent(sID, sfirstName, slastName, semailAddress, days, SOFTWARE);
	else classRosterArray[lastIndex] = new SecurityStudent(sID, sfirstName, slastName, semailAddress, days, SECURITY);
}

void Roster::printAll()
{
	for (int i = 0; i <= lastIndex; i++) {
		classRosterArray[i]->print();
	}
}



int main() {
	cout << "C867 Scripting and Programming - Applications" << endl;
	cout << "Programming language used: C++" << endl;
	cout << "Student: #000904288, Jeffrey Quarnberg" << endl << endl;


	string studentData[5] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Jeff,Quarnberg,jquarn1@my.wgu.edu,49,20,30,28,SOFTWARE"
	};

	Roster * classRoster = new Roster(5);
	for (int i = 0; i < 5; i++)
	{
		classRoster->parseThenAdd(studentData[i]);
	}
	classRoster->printAll();
	system("pause");
}
