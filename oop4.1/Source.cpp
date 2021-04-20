#include "HourlyPayment.h"
#include <Windows.h> 
#include <iostream>
#include "HourlyPayment.h"
#include "Salary.h"

int main()
{
	

	cout << "Employee with HPS : " << endl;
	HourlyPayment A(12, 0, 75,0);
	A.Print();
	cout << "Salary per hours  = " << A.salary() << "hrn" << endl;
	cout << endl << endl;

	cout << "Employee with DPS: " << endl;
	Salary B(0, 20, 0, 450);
	B.Print();
	cout << " Salary per days= " << B.salary() << "hrn" << endl;
	cout << endl << endl;


	Employee* pa = new HourlyPayment();
	Employee* pb = new Salary();


	cout << typeid(pa).name() << endl;
	cout << typeid(*pa).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(*pb).name() << endl;


	delete pa, delete pb;


	Employee* N[2];

	N[0] = &A;
	N[1] = &B;


	cout << "HPS = " << N[0]->salary() << endl;
	cout << "DPS = " << N[1]->salary() << endl;

}