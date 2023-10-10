//
// Created by Riley Connors on 10/4/23.
//

#ifndef EMPLOYEE_CLASSES_PROFESSIONAL_H
#define EMPLOYEE_CLASSES_PROFESSIONAL_H

#include "Employee.h"

/*
Professional inherits from Employee
Adds member variable salary. This is per week before healthcare contribution
14 vacation days per year--this are assigned in constructor
healthcare contribution is $50 per week--this is assigned in constructor
default constructor sets salary to 2000
calcWeeklySalary() returns salary - healthcareContribution
calcVacay() returns vacation days
calcHealthcare() returns healthcare contribution

vacation days can be changed using .setVacation()
healthcare contribution can be changed using .setHealthcareContribution()
salary can be changed using .setSalary()
*/

class Professional : public Employee {
private:
    int salary;
public:
    explicit Professional(int salary = 2000);

    int calcWeeklySalary()  override;
    double calcVacay() override;
    int calcHealthcare() override;


};


#endif //EMPLOYEE_CLASSES_PROFESSIONAL_H
