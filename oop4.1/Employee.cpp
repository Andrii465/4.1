#include "Employee.h"


void Employee::SetHours(int value)
{
    if (value > 0)
        hours = value;
    else
        hours = 0;
}
void Employee::SetDays(int value)
{
    if (value > 0)
        days = value;
    else
        days = 0;
}
void Employee::SetPerhour(int value)
{
    if (value > 0)
        perhour = value;
    else
        perhour = 0;
}
void Employee::SetPerday(int value)
{
    if (value > 0)
        perday = value;
    else
        perday = 0;
}
Employee::Employee()
    : hours(0), days(0), perhour(0), perday(0)
{}

Employee::Employee(int hours, int days, int perhour, int perday)
    : hours(hours), days(days), perhour(perhour), perday(perday)
{}
