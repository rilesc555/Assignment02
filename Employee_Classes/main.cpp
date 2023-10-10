#include <iostream>

using namespace std;

#include "Professional.h"
#include "Nonprofessional.h"

int main() {
    cout << "Hello, World!\n" << endl;

    Professional Paul;
    Nonprofessional Nancy;

    cout << "Paul's weekly salary is " << Paul.calcWeeklySalary() << endl;
    cout << "Paul's vacation days are " << Paul.calcVacay() << endl;
    cout << "Paul's healthcare contribution is " << Paul.calcHealthcare() << endl;
    cout << endl;
    cout << "Nancy's weekly salary is " << Nancy.calcWeeklySalary() << endl;
    cout << "Nancy's vacation days are " << Nancy.calcVacay() << endl;
    cout << "Nancy's healthcare contribution is " << Nancy.calcHealthcare() << endl;

    Nancy.setHoursWorked(50);
    Nancy.setWage(30);
    cout << endl;
    cout << "Nancy's weekly salary is now " << Nancy.calcWeeklySalary() << endl;
    cout << "Nancy's vacation days are now " << Nancy.calcVacay() << endl;
    cout << "Nancy's healthcare contribution is now " << Nancy.calcHealthcare() << endl;
    return 0;
}
