#include <iostream>
#include <iomanip>
#include <vector>
#include "empleado.h"
#include "empleadoAsalariado.h" 
#include "empleadoPorHora.h"
#include "empleadoDeComission.h"
#include "empleadoPlus.h"
#include "empleadoPorDia.h"
using namespace std;

void virtualViaPointer( const Employee * const ); // prototype
void virtualViaReference( const Employee & ); // prototype

int main()
{

    cout << fixed << setprecision( 2 );

 
    SalariedEmployee salariedEmployee( 
    "John", "Smith", "111-11-1111", 800 ); 
    HourlyEmployee hourlyEmployee( 
    "Karen", "Price", "222-22-2222", 16.75, 40 );
    CommissionEmployee commissionEmployee( 
    "Sue", "Jones", "333-33-3333", 10000, .06 );
    BasePlusCommissionEmployee basePlusCommissionEmployee( 
    "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
    DailyEmployee dailyEmployee("Luisa","Gonzo","555-55-555",30.50,50);
    cout << "Employees processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
    hourlyEmployee.print();
    cout << "\nearned $" << hourlyEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned $" <<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned $" <<basePlusCommissionEmployee.earnings()<< "\n\n";
    dailyEmployee.print();
    cout << "\nearned $" << dailyEmployee.earnings() << "\n\n";

    vector < Employee * > employees( 5 ); 
    employees[ 0 ] = &salariedEmployee;
    employees[ 1 ] = &hourlyEmployee; 
    employees[ 2 ] = &commissionEmployee; 
    employees[ 3 ] = &basePlusCommissionEmployee;
    employees[ 4 ] = &dailyEmployee;
    cout << "Employees processed polymorphically via dynamic binding:\n\n";
    cout << "Virtual function calls made off base-class pointers:\n\n";
    for ( size_t i = 0; i < employees.size(); i++ )
        virtualViaPointer( employees[ i ] ); 
    cout << "Virtual function calls made off base-class references:\n\n";
    for ( size_t i = 0; i < employees.size(); i++ ) 
        virtualViaReference( *employees[ i ] );
}

void virtualViaPointer( const Employee * const baseClassPtr ) 
{ 
 baseClassPtr->print(); 
 cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference( const Employee &baseClassRef ) 
{ 
 baseClassRef.print(); 
 cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}