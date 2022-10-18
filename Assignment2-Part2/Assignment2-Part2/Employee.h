#pragma once
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
/*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* SETUP CONSTRUCTORSSSSSS
*/
class Employee
{
	protected:
		double salary;
		double hoursWorked;
		double hourlyRate;
		double vacationDays;

		//pure virtual functions
	public:
		virtual double weekly_salary(double hoursWorked, double hourlyRate) const = 0;
		virtual double health_care() const = 0;
		virtual double vacation_days(double hoursWorked) const = 0;
};

class Professional : public Employee
{

	public:
		double weekly_salary();

		double vacation_days();

		double health_care();


};

class NonProfessional : public Employee
{
	public:
		void set_hours(double hoursWorked);
		void set_rate(double hourlyRate);

		double get_hours() const
		{
			return hoursWorked;
		}

		double get_rate() const
		{
			return hourlyRate;
		}
		
		double weekly_salary();

		double vacation_days();

		double health_care();

};

#endif