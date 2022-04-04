#ifndef EMPLOYEEPERDAY_H
#define EMPLOYEEPERDAY_H
#include "string.h"
#include "empleado.h"
#include<iostream>
using namespace std;

class DailyEmployee : public Employee{
    public:
        static const int daysPerWeek = 4;
        DailyEmployee(const string &, const string &, const string & , double = 0.0,int = 0);
        virtual void print() const;
        virtual double earnings() const;
        void setDailySalary(double);
        double getDailySalary()const;
        void setDays(int);
        int getDays()const;
    private:
        int daysWorked;
        double moneyPerDay;
};


#endif
