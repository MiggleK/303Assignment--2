#pragma once
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
	protected:
		double hoursWorked;
		double hourlyRate;

	public:
		virtual double weekly_salary() const = 0;
		virtual double health_care() const = 0;
		virtual double vacation_days() const = 0;

		double get_hours() const
		{
			return hoursWorked;
		}

		double get_rate() const
		{
			return hourlyRate;
		}

		void set_hours(double hoursWorked);
		void set_rate(double hourlyRate);
};

#endif