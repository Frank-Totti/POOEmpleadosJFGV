#ifndef SALARIED_H
#define SALARIED_H

#include "empleado.h" 

class SalariedEmployee : public Employee 
{
    public:
        SalariedEmployee( const string &, const string &, 
        const string &, double = 0.0 );
        void setWeeklySalary( double ); 
        double getWeeklySalary() const; 
        virtual double earnings() const; 
        virtual void print() const; 
    private:
        double weeklySalary; // salary per week
};

#endif // SALARIED_H