#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> 
using namespace std;

/*      SalariedEmployee( const string &, const string &, 
        const string &, double = 0.0 );
        void setWeeklySalary( double ); 
        double getWeeklySalary() const; 
        virtual double earnings() const; 
        virtual void print() const; */

class Employee 
{
    public:
        Employee( const string &, const string &, const string & );
        void setFirstName( const string & ); 
        string getFirstName() const; 
        void setLastName( const string & ); 
        string getLastName() const; 
        void setSocialSecurityNumber( const string & ); 
        string getSocialSecurityNumber() const; 
        virtual double earnings() const = 0; 
        virtual void print() const; 
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
};

#endif // Employee