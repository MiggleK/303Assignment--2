#pragma once
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
	public:
		virtual double weekly_salary() const = 0;
		virtual double health_care() const = 0;
		virtual double vacation_days() const = 0;
};

class Professional : public Employee
{
	private:
		double salary;
		int vacationDays;
	public:
		
		
		/*void set_salary(double salary);
		void set_vacationDays(int vacationDays);

		double get_salary() const
		{
			return salary;
		}

		double get_vacation_days() const
		{
			return vacationDays;
		}*/

};

class NonProfessional : public Employee
{
	private:
		double hoursWorked;
		double hourlyRate;

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
};

#endif