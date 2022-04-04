#ifndef COMMISSION_H
#define COMMISSION_H
#include "empleado.h" 

class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee( const string &, const string &,
        const string &, double = 0.0, double = 0.0 );
        virtual double earnings() const; 
        virtual void print() const; 
        void setCommissionRate( double ); 
        double getCommissionRate() const; 
        void setGrossSales( double ); 
        double getGrossSales() const; 
    private:
        double grossSales; 
        double commissionRate;
}; 

#endif // COMMISSION_H

