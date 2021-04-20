
#include "HourlyPayment.h"

HourlyPayment::HourlyPayment()
    : Employee(0, 0, 0, 0)
{}

HourlyPayment::HourlyPayment(int hours, int days, int perhour, int perday)
    : Employee(hours, days, perhour, perday)
{}
double HourlyPayment::salary()
{
    double SPH = GetHours() * GetPerhour();
    return SPH;
}
void HourlyPayment::Print()
{
    cout << "number  of hours " << GetHours() << endl;
    cout << "payment per hour: " << GetPerhour() << endl;
}