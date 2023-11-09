/* Module to find the highest month salary of a worker. */

#include "employees.h"

void highest_mon_salary(Employee *em)
{
    float help_var=0;
    float max=0;
    int temp;

    for(int i=0; i<12; i++)
    {
        if(em->salary[i].month_salary > help_var)
        {
            help_var=em->salary[i].month_salary;
            max=help_var;
            temp=i;
        }
    }
    std::cout<< "Highest month salary: "<< max <<". It's for month: " << temp+1 <<std::endl;
}