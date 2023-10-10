//
// Created by Riley Connors on 10/4/23.
//

#include "Professional.h"

Professional::Professional(int salary): Employee(1000, 14, 50) {
    this->salary = salary;
}

int Professional::calcWeeklySalary() {
    int temp = salary - getHealthcareContribution();
    this->setWeeklyPay(temp);
    return getWeeklyPay();
}

double Professional::calcVacay() {
    return getVacation();
}

int Professional::calcHealthcare() {
    return getHealthcareContribution();
}



