#ifndef HOURLY_H
#define HOURLY_H

#include "empleado.h" 

class HourlyEmployee : public Employee
{
    public:
        static const int hoursPerWeek = 168; 
        virtual double earnings() const;  
        virtual void print() const; 
        
        HourlyEmployee( const string &, const string &, 
        const string &, double = 0.0, double = 0.0 );

        void setWage( double ); 
        double getWage() const; 

        void setHours( double ); 
        double getHours() const; 

    private:
        double wage;
        double hours;
}; 

#endif 