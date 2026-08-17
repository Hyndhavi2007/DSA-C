#include <stdio.h>

struct Student
{
    int rollno;
    char name[100];
    struct Student *Student2;
};

int main()
{
    struct Student s1, s2;

    printf("Enter Student Details\n");

    printf("Student 1 Details\n");

    printf("Name: ");
    scanf("%s", s1.name);

    printf("Roll number: ");
    scanf("%d", &s1.rollno);

    printf("\nStudent 2 Details\n");

    printf("Name: ");
    scanf("%s", s2.name);

    printf("Roll number: ");
    scanf("%d", &s2.rollno);

    s1.Student2 = &s2;
    s2.Student2 = NULL;

    printf("\n===== Student Details =====\n");

    printf("Student 1: %s, %d\n", s1.name, s1.rollno);
    printf("Student 2: %s, %d\n", s1.Student2->name, s1.Student2->rollno);

    return 0;
}