#include<stdio.h>
#include<string.h>

typedef struct payroll
{
    /* data */
    int id;
    char *name;
    char *desg;
}payroll;

void enterPayroll(payroll *emp);

void main(){
    payroll emp1;

    emp1.name = "arun";
    emp1.desg = "dev";
    emp1.id = 109;

    enterPayroll(&emp1);
    
}

void enterPayroll(payroll *emp){
    printf("emp name is : %s \r\n", emp->name);
    printf("emp desg is : %s", emp->desg);
}
