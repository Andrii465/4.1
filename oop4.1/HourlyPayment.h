#pragma once
#include "Employee.h"

class HourlyPayment : public Employee
{
public:
	HourlyPayment();
	HourlyPayment(int hours, int days, int perhour, int perday);

	virtual double salary();
	virtual void Print();
};