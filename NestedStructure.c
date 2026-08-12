#include<stdio.h>
struct Student{
    char name[100];
};
struct Address{
    char state[100];
    char city[100];
    int pincode;
    struct Student s1;
};
int main(){
    struct Address add;
    printf("Enter name of the Student: ");
    scanf("%s",add.s1.name);
    printf("Enter name of the state: ");
    scanf("%s", add.state);
    printf("Enter name of the city: ");
    scanf("%s",add.city);
    printf("Enter the area pincode: ");
    scanf("%d",&add.pincode);
    printf("=====Person Details======\n");
    printf("Name: %s\n",add.s1.name);
    printf("State: %s\n",add.state);
    printf("City: %s\n",add.city);
    printf("Pincode: %d",add.pincode);
    return 0;
}
