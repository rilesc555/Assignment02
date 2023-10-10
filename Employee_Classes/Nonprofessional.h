//
// Created by Riley Connors on 10/4/23.
//

#ifndef EMPLOYEE_CLASSES_NONPROFESSIONAL_H
#define EMPLOYEE_CLASSES_NONPROFESSIONAL_H

#include "Employee.h"

/*
Nonprofessional inherits from Employee
Adds member variable weeklyHours and wage (per hour). These are assigned in constructor by default to 40 and 25 respectively
vacation days are calculated as 4% of hours worked per week
healthcare contribution is $2 per hour worked
calcWeeklySalary() sets weeklyPay = weeklyHours * wage - healthcareContribution and returns weeklyPay
calcVacay() sets vacation = weeklyHours * .04 and returns vacation
calcHealthcare() sets healthcareContribution = weeklyHours * 2 and returns healthcareContribution

hours worked can be changed using .setHoursWorked()
wage can be changed using .setWage()
vacation days can be changed using .setVacation()
healthcare contribution can be changed using .setHealthcareContribution()
salary can be changed using .setSalary()

*/
class Nonprofessional : Employee {
private:
    int weeklyHours{};
    int wage{};

public:
    explicit Nonprofessional(int weeklyHours = 40, int wage = 25);

    int calcWeeklySalary() override;
    double calcVacay() override;
    int calcHealthcare() override;

    void setHoursWorked(int hoursWorked);
    int getHoursWorked() const;

    void setWage(int wage);
    int getWage() const;
};


#endif //EMPLOYEE_CLASSES_NONPROFESSIONAL_H
