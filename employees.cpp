/* Program to manage records of employees*/

#include "employees.h"

int main()
{
    int choice;
    int workers_count;
    int employee_id;
    int flag=0;

    std::cout<<"Enter count of workers: ";
    std::cin>>workers_count;
    std::cin.ignore();

    Employee employees[workers_count];

    while (1)
    {
        std::cout<<"----------------------- MENU -----------------------\n";
        std::cout<<"Do you wish to perform an operation? Choose a number between 1-7.\n";
        std::cout<<"1. Input data for the workers.\n";
        std::cout<<"2. Output data for the workers.\n";
        std::cout<<"3. Output data for one worker.\n";
        std::cout<<"4. Output year income for all workers.\n";
        std::cout<<"5. Output year income for one worker.\n";
        std::cout<<"6. Output the workers with year income above 20K .\n";
        std::cout<<"7. Output the highest month salary for a worker.\n";
        std::cout<<"0. Exit program.\n";

        std::cin>>choice;
        std::cin.ignore();

        if(choice == 0)
        {
            break;
        }

        switch (choice)
        {
            case 1:

                for(int i=0; i< workers_count; i++)
                {
                    std::cout<<"---------------------------- INPUTTING EMPLOYEES DATA ----------------------------\n";
                    std::cout<< "Employee " << i+1 << std::endl;

                    input_employees_data(&employees[i]);
                }
                break;
            
            case 2:

                for(int i=0; i< workers_count; i++)
                {
                    std::cout<<"---------------------------- OUTPUTTING EMPLOYEES DATA ----------------------------\n\n";
                    std::cout<< "Employee " << i+1 << std::endl;

                    output_employees_data(&employees[i]);
                }
                break;
            
            case 3:

                std::cout<<"Enter employee ID: \n";
                std::cin>>employee_id;
                std::cin.ignore();

                for(int i=0; i<workers_count; i++)
                {
                    if(employee_id == employees[i].employee_id)
                    {
                        std::cout<<"---------------------------- OUTPUTTING AN EMPLOYEE DATA ----------------------------\n\n";
                        output_employees_data(&employees[i]);
                        flag=1;
                    }
                }

                if(flag == 0)
                {
                    std::cout<< "NO EXISTING EMPLOYEE WITH THE GIVEN ID.\n";
                }
                break;
            case 4:

                for (int i = 0; i < workers_count; i++)
                {
                    std::cout<<"--------------------------------------------------------------------------------------------\n\n";
                    year_income(&employees[i]);
                    std::cout<<"--------------------------------------------------------------------------------------------\n\n";
                }
                break;

            case 5:
                std::cout<< "Enter employee ID: ";
                std::cin>> employee_id;
                std::cin.ignore();
                std::cout<<"\n";
                
                for(int i=0; i<workers_count; i++)
                {
                    if(employee_id == employees->employee_id)
                    {
                        std::cout<<"----------------------------------- EMPLOYEE YEAR INCOME -----------------------------------\n\n";
                        year_income(&employees[i]);
                        std::cout<<"--------------------------------------------------------------------------------------------\n\n";
                        flag = 1;
                    }
                    
                }
                if(flag == 0)
                {
                    std::cout<< "NO EXISTING EMPLOYEE WITH THE GIVEN ID.\n";
                }
                break;

            default:
                break;
        }

    }
    
    return 0;
}