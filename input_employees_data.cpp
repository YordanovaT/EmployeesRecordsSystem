/* Module to input data for employees */

#include "employees.h"

void input_employees_data(Employee *em)
{

    std::cout<<"Enter employee ID: ";
    std::cin>> em->employee_id; 
    std::cout<<"\n";
    std::cin.ignore();

    std::cout<<"Enter employee first name: ";
    std::cin>> em->name.first_name; 
    std::cout<<"\n";
    std::cin.ignore();

    std::cout<<"Enter employee first name: ";
    std::cin>> em->name.last_name; 
    std::cout<<"\n";
    std::cin.ignore();

    std::cout<<"Enter employee position: ";
    std::cin>> em->employee_position; 
    std::cout<<"\n";
    std::cin.ignore();
    fflush(stdin);

    //entering month salary for the whole year
    for(int i=0; i<12; i++)
    {
        std::cout<<"Enter month salary for month: " << i+1 << "\n";
        std::cin>>em->salary[i].month_salary;
        std::cin.ignore();
    }

}