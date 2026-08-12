#include<stdio.h>
struct Student{
    char name[100];
    char department[100];
    int rollno;
};
int main(){
    struct Student S = {"Ram", "CSE",123};
    printf("Name: %s\nDepartment: %s\nRoll number: %d\n",S.name,S.department,S.rollno);
    return 0;
}