#pragma once
#include "Employee.h"

class Salary : public Employee
{
public:
	Salary();
	Salary(int hours, int days, int perhour, int perday);

	virtual double salary();
	virtual void Print();
};