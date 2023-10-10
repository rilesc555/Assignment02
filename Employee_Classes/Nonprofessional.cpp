//
// Created by Riley Connors on 10/4/23.
//

#include "Nonprofessional.h"

Nonprofessional::Nonprofessional(int weeklyHours, int wage) : Employee(0, 0, 0){
    this->weeklyHours = weeklyHours;
    this->wage = wage;
}

int Nonprofessional::calcWeeklySalary() {
    calcHealthcare();
    int temp = weeklyHours * wage - getHealthcareContribution();
    this->setWeeklyPay(temp);
    return getWeeklyPay();
}

double Nonprofessional::calcVacay() {
    double temp = weeklyHours * .04;
    this->setVacation(temp);
    return getVacation();
}

int Nonprofessional::calcHealthcare() {
    int temp = weeklyHours * 2;
    this->setHealthcareContribution(temp);
    return getHealthcareContribution();
}

void Nonprofessional::setHoursWorked(int hoursWorked) {
    this->weeklyHours = hoursWorked;
}

int Nonprofessional::getHoursWorked() const {
    return weeklyHours;
}

void Nonprofessional::setWage(int wage) {
    this->wage = wage;
}

int Nonprofessional::getWage() const {
    return wage;
}


