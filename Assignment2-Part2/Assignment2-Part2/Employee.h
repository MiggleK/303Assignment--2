#pragma once
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
	protected:
		double salary;
		double hoursWorked;
		double hourlyRate;
		double vacationDays;

		
	public:
		//pure virtual functions
		virtual double weekly_salary() = 0;
		virtual double health_care() = 0;
		virtual double vacation_days() = 0;

		//constructor
		Employee(double salary, double hoursWorked, double hourlyRate, double vacationDays)
		{
			this->hourlyRate = hourlyRate;
			this->hoursWorked = hoursWorked;
			this->salary = salary;
			this->vacationDays = vacationDays;
		}

		//destructor
		virtual ~Employee() {};
};

class Professional : public Employee
{
	public:
		using Employee::Employee; //"Using" keyword is to allow the derived class to use the base class constructor

		double weekly_salary();

		double vacation_days();

		double health_care();
};

class NonProfessional : public Employee
{
	public:
		using Employee::Employee;

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