/* Module to output data for employee/s */

#include "employees.h"

void output_employees_data(Employee *em)
{
    std::cout<< "Employee ID: " << em->employee_id << "\t";

    std::cout<< "Employee name: " << em->name.first_name << " " << em->name.last_name << "\t";
    std::cout<<" Position: " << em->employee_position <<"\n\n";

    for(int i=0; i<12; i++)
    {
        std::cout<<"Month "<< i+1 << ": "<< em->salary[i].month_salary<< std::endl;
    }

}