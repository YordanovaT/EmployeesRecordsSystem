employees.out: employees.o input_employees_data.o output_employees_data.o year_income.o rich_employees.o highest_mon_sal.o
	g++ employees.o input_employees_data.o output_employees_data.o year_income.o rich_employees.o highest_mon_sal.o -o employees.out

employees.o: employees.cpp
	g++ -c employees.cpp

input_employees_data.o: input_employees_data.cpp
	g++ -c input_employees_data.cpp

output_employees_data.o: output_employees_data.cpp
	g++ -c output_employees_data.cpp

year_income.o: year_income.cpp
	g++ -c year_income.cpp

rich_employees.o: rich_employees.cpp
	g++ -c rich_employees.cpp

highest_mon_sal.o: highest_mon_sal.cpp
	g++ -c highest_mon_sal.cpp

clean:
	rm *.o employees.out