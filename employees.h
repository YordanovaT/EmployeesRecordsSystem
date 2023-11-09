#ifndef EMPLOYEES
#define EMPLOYEES
    #include<iostream>
    #include <cstring>
    #include <iomanip>

    struct FullName
    {
        char first_name[20];
        char last_name[30];
    };

    struct Salary
    {
        float month_salary;
    };

    struct Employee
    {
        FullName name;
        Salary salary[12];
        int employee_id;
        char employee_position[50];
        float year_income;
    };

    void input_employees_data(Employee *em);
    void output_employees_data(Employee *em);
    void year_income(Employee *em);
    void highest_mon_salary(Employee *em);
    void rich_employees(Employee *em);
#endif