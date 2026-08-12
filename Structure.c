#include<stdio.h>
struct Student {
    char name[100];
    int rollno;
    char department[100];
};
int main(){
    struct Student Student1;
    printf("Enter name of the Student: ");
    scanf("%s", Student1.name);
    printf("Enter Roll number of the Student: ");
    scanf("%d",&Student1.rollno);
    printf("Enter name of the department: ");
    scanf("%s",Student1.department);
    printf("======Student Details======\n");
    printf("Name of the Student: %s\n",Student1.name);
    printf("Roll Number        : %d\n", Student1.rollno);
    printf("Department         :%s\n", Student1.department);

}