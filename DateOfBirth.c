#include<stdio.h>
struct DOB{
    int date;
    int month;
    int year;
};
int main(){
    struct DOB dob;
    printf("Enter your date of birth(DD MM YYYY): ");
    scanf("%d %d %d",&dob.date,&dob.month,&dob.year);
    printf("\n Date of Birth: %d/%d/%d\n", dob.date,dob.month,dob.year);
    return 0;
}