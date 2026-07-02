#include<stdio.h>
int main(){
    int id;
    char name[50], department[50];
    float salary;
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Department: ");
    scanf("%s", department);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\nEmployee Details\n");
    printf("Employee ID: %d\n", id);
    printf("Employee Name: %s\n", name);
    printf("Department: %s\n", department);
    printf("Salary: %.2f\n", salary);
    return 0;
}