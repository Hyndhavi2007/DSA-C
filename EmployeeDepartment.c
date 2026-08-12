#include<stdio.h>
struct Employee{
    int employeeID;
    char name[100];
};
struct Department{
    char departmentName[100];
    int departmentID;
    struct Employee E;
};
int main(){
    struct Department D;
    printf("Enter Employee name: ");
    scanf("%s", D.E.name);
    printf("Enter Employee ID: ");
    scanf("%d",&D.E.employeeID);
    printf("Enter Department Name: ");
    scanf("%s",D.departmentName);
    printf("Enter EmployeeID: ");
    scanf("%d",&D.departmentID);
    printf("==========Employee Details========\n");
    printf("Employee Name: %s\n",D.E.name);
    printf("Employee ID: %d\n",D.E.employeeID);
    printf("Department Name: %s\n",D.departmentName);
    printf("Department ID: %d\n",D.departmentID);
    return 0;
}
