#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "empleadoDeComission.h" 

class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee( const string &, const string &,
        const string &, double = 0.0, double = 0.0, double = 0.0 );
        virtual double earnings() const; 
        virtual void print() const;
        void setBaseSalary( double ); 
        double getBaseSalary() const; 

    private:
        double baseSalary; 
}; 

#endif // BASEPLUS_H
