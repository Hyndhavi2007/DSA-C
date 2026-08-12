#include<stdio.h>
struct Student {
    char name[100];
    int rollno;
};
int main(){
    int i , n;
    printf("Enter number of student records to be stored: ");
    scanf("%d",&n);
    struct Student s[n];
    for(i = 0; i < n; i++){
        printf("========Enter %d records========\n",i+1);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Roll Number: ");
        scanf("%d",&s[i].rollno);
    }
    printf("\n\t Name\tRollNo\t\n");
    for(i = 0; i< n; i++){
        printf("\n\t %s\t%d\t\n",s[i].name,s[i].rollno);
    }
    return 0;
}