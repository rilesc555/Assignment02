//
// Created by Riley Connors on 10/4/23.
//

#ifndef EMPLOYEE_CLASSES_EMPLOYEE_H
#define EMPLOYEE_CLASSES_EMPLOYEE_H


class Employee {
private:
    int weeklyPay;
    double vacation;
    int healthcareContribution;

public:
    Employee(int weeklyPay = 0, double vacation = 0, int healthcareContribution = 0);
    virtual int calcWeeklySalary()  = 0;
    virtual double calcVacay() = 0;
    virtual int calcHealthcare() = 0;

    void setWeeklyPay(int weeklyPay);
    void setVacation(double vacation);
    void setHealthcareContribution(int healthcareContribution);

    int getWeeklyPay() const;
    double getVacation() const;
    int getHealthcareContribution() const;
};




#endif //EMPLOYEE_CLASSES_EMPLOYEE_H
