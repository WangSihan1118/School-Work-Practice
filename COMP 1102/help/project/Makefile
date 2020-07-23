SchoolManagementSystem: main.c assist.o student.o teacher.o 
	gcc -o SchoolManagementSystem main.c assist.o student.o teacher.o -no-pie

teacher.o: teacher.c teacher.h
	gcc -c teacher.c -no-pie

student.o: student.c student.h
	gcc -c student.c -no-pie

assist.o: assist.c assist.h
	gcc -c assist.c -no-pie


