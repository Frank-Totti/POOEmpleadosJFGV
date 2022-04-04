#include "empleadoPorDia.h"

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, double inMoney, int days) : Employee(first,last,ssn){
    setDailySalary(inMoney);
    setDays(days);
}

void DailyEmployee::print()const{
    cout << "hourly employee: ";
    Employee::print();
    cout << "\ndays wage: " <<getDailySalary()<< 
    "; days worked: " << getDays();
}

double DailyEmployee::earnings()const{
    return moneyPerDay * getDays();
}

int DailyEmployee::getDays()const{
    return this->daysWorked;
}

void DailyEmployee::setDays(int numberOfDays){
    daysWorked = (((numberOfDays < 0) && (numberOfDays <= daysPerWeek)) ? 0 : numberOfDays);
}

void DailyEmployee::setDailySalary(double inMoney){
    moneyPerDay = (inMoney < 0.0) ? 0.0 : inMoney;
}

double DailyEmployee::getDailySalary()const{
    return this->moneyPerDay;
}




