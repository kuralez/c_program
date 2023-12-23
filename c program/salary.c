#include <stdio.h>

int main(){
    int basic_salary,gross_salary;
    printf("Enter the basic salary:");
    scanf("%d",&basic_salary);
    gross_salary=basic_salary- (0.2 * basic_salary)- (0.4 * basic_salary);
    printf("gross salary: %d",gross_salary);
    return 0;
}
