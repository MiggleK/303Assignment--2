/*
* Miguel R. Kunkle
* Created: 10/10/2022
* 
* Description: This program creates an abstract class, Employee, and derives 2 classes from it: Professional and NonProfessional
* You can put in different aspects of the objects into a constructor passed down from the base class, and see information.
* Note that since nonprofessionals don't get a salary or a set number of vacation days, these values are zeroed out.
* 
*/

#include <iostream>
#include "Employee.h"

double NonProfessional::weekly_salary()
{
    double pay = hoursWorked * hourlyRate;

    return pay;
}

//this function is just used to calculate the vaction days earned **that week**, as per instructions.
double NonProfessional::vacation_days()
{
    double vacationRate = 0.0385;
    double vacationHours = hoursWorked * vacationRate;

    vacationDays = vacationHours / 8;

    return vacationDays;
}

double NonProfessional::health_care()
{
    double healthCareRate = 0.35;
    double healthCareContributions = hoursWorked * healthCareRate;

    return healthCareContributions;
}

double Professional::weekly_salary()
{
    double weeklyPay = salary / 52; //52 weeks in a year to calculate weekly salary from yearly salary

    return weeklyPay;
}

double Professional::vacation_days()
{
    return vacationDays; //This function need not do any calculations, as a professional employees vacations days are set, so its constructor does this functions job.
}

double Professional::health_care()
{
    double healthCareRate = 0.6;
    double healthCareContributions = (salary / 52) * healthCareRate;

    return healthCareContributions;
}


int main()
{
    //object creation
    NonProfessional Timmy(0, 40, 20.50, 0);
    Professional Billy(100000, 0, 0, 21);

    //nonprofessional output
    std::cout << "NonProfessional weekly pay: " << Timmy.weekly_salary() << std::endl;
    std::cout << "NonProfessional vacation days: " << Timmy.vacation_days() << std::endl;
    std::cout << "NonProfessional health care funds: " << Timmy.health_care() << std::endl;

    std::cout << "-------------------------------" << std::endl;

    //Professional output
    std::cout << "Professional weekly pay: " << Billy.weekly_salary() << std::endl;
    std::cout << "Professional vacation days: " << Billy.vacation_days() << std::endl;
    std::cout << "Professional health care funds: " << Billy.health_care() << std::endl;

}


