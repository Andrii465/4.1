#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;
class Employee
{
private:
	int hours, days, perhour, perday;
public:
	Employee();
	Employee(int hours, int days, int perhour, int perday);

	int GetHours()const { return hours; }
	int GetDays()const { return days; }
	int GetPerhour()const { return perhour; }
	int GetPerday()const { return perday; }

	void SetHours(int value);
	void SetDays(int value);
	void SetPerhour(int value);
	void SetPerday(int value);

	virtual double salary() = 0;
	virtual void Print() = 0;

};
