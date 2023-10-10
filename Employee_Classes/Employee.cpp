//
// Created by Riley Connors on 10/4/23.
//

#include "Employee.h"

//constructor for Employee
Employee::Employee(int weeklyPay, double vacation, int healthcareContribution) {
    this->weeklyPay = weeklyPay;
    this->vacation = vacation;
    this->healthcareContribution = healthcareContribution;
}

//setters and getters for Employee
void Employee::setWeeklyPay(int weeklyPay) {
    this->weeklyPay = weeklyPay;
}
void Employee::setVacation(double vacation) {
    this->vacation = vacation;
}
void Employee::setHealthcareContribution(int healthcareContribution) {
    this->healthcareContribution = healthcareContribution;
}
int Employee::getWeeklyPay() const {
    return weeklyPay;
}
double Employee::getVacation() const {
    return vacation;
}
int Employee::getHealthcareContribution() const {
    return healthcareContribution;
}
