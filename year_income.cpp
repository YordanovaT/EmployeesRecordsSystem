/* Module to calculate the year income for worker/s */

#include "employees.h"

 void year_income(Employee *em)
 {
    for(int i=0; i<12; i++)
    {
        em->year_income += (float)em->salary[i].month_salary; 
    }

    std::cout<< "Employee ID: " << em->employee_id << "\t";

    std::cout<< "Employee name: " << em->name.first_name << " " << em->name.last_name << "\t";
    std::cout<<" Position: " << em->employee_position <<"\n\n";

    std::cout<<"Year income: "<< em->year_income << "\n";

 }