#include <stdio.h>
#include <string.h>
#ifndef STUDENT_H
#define STUDENT_H

struct Student{
    long long studentId;
    char* studentName;
    char* studentPassword;
    int introGrade;
    int calculusGrade;
    int englishGrade;
};

struct Student createStudent(long long sId, char* sName, char* sPassword, int introGrade, int calculusGrade,  int englishGrade);
void s_menu(void);
void s_login();
void s_choice(void);
void s_test();
void s_grade();
void s_summary();
void s_password(void);
void s_total();
void s_analyse();
void s_appeal();
void s_goal();
void s_news();

#endif