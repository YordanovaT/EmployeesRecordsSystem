/* Module to find the workers with year income of 30K or above. */

#include "employees.h"

void rich_employees(Employee *em)
{
    float max=30000;
    if(em->year_income < max)
    {
        return;
    }
    else
    {
        std::cout<<"----------------------------- EMPLOYEES WITH YEAR INCOME ABOVE 30K -----------------------------\n\n";
        max=em->year_income;
        std::cout<< "Employee ID: " << em->employee_id << "\n";
        std::cout<< "Employee name: " << em->name.first_name << " " << em->name.last_name<< "\t"<< "Year income: " << max << "\n";
        std::cout<<"--------------------------------------------------------------------------------------------\n\n";
    }

}